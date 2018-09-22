/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_st_en.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:56:05 by amurakho          #+#    #+#             */
/*   Updated: 2018/09/12 18:56:06 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lem_in.h"

void	ft_rooms(t_room *rooms)
{
	t_room	*c_rooms;
	int		st;
	int		end;

	st = 0;
	end = 0;
	c_rooms = rooms;
	while (c_rooms->next)
	{
		if (c_rooms->strt_end == 1)
			st++;
		if (c_rooms->strt_end == 2)
			end++;
		c_rooms = c_rooms->next;
	}
	if (st != 1 || end != 1)
		ft_error_manage(4, 1);
}

void	ft_lem_se(t_room *rooms, t_lemin *lemin)
{
	t_room	*c_rooms;

	c_rooms = rooms;
	ft_rooms(rooms);
	while (c_rooms->next)
	{
		if (c_rooms->strt_end == 2)
			lemin->end = c_rooms;
		else if (c_rooms->strt_end == 1)
		{
			c_rooms->is_fill = 1;
			lemin->start = c_rooms;
		}
		c_rooms = c_rooms->next;
	}
}

void	ft_take_room(char *line, t_room **zero_room)
{
	int	strt_end;

	strt_end = 0;
	if (line[2] && line[2] == 's')
		strt_end = 1;
	else if (line[2] && line[2] == 'e')
		strt_end = 2;
	free(line);
	get_next_line(0, &line);
	while (line[0] == '#' && line)
	{
		if (ft_strequ(line, "##GO"))
		{
			free(line);
			ft_error_manage(4, 1);
		}
		free(line);
		get_next_line(0, &line);
	}
	if (ft_error(line, 1))
	{
		free(line);
		ft_error_manage(5, 1);
	}
	ft_take_info(line, strt_end, zero_room, 1);
}
