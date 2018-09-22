/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:58:13 by amurakho          #+#    #+#             */
/*   Updated: 2018/09/12 18:58:14 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lem_in.h"

void	ft_play(t_room *rooms, t_lemin *lemin)
{
	t_link	*c_link;
	int		counter;

	c_link = lemin->end->link;
	while (c_link->next)
	{
		lemin->ways_count++;
		c_link = c_link->next;
	}
	lemin->turn->number = lemin->start->number;
	lemin->turn->next = NULL;
	counter = 0;
	while (counter != lemin->ways_count)
	{
		if (!ft_take_best(lemin, rooms))
			break ;
		ft_lem_se(rooms, lemin);
		counter++;
	}
	if (lemin->way_number < lemin->ways_count)
		lemin->ways_count = lemin->way_number;
	if (!lemin->ways[0])
		ft_error_manage(3, 1);
	ft_find_best(lemin);
	ft_make_ants(lemin);
}

void	ft_go(char *line, t_lemin *lemin, t_room *zero_room)
{
	if (ft_strlen(line))
		free(line);
	ft_lem_se(zero_room, lemin);
	ft_play(zero_room, lemin);
	exit(1);
}

void	ft_command(char *line, t_lemin *lemin, t_room **zero_room)
{
	if (ft_strequ(line, "##start") || ft_strequ(line, "##end"))
		ft_take_room(line, zero_room);
	else if (ft_strequ(line, "##GO"))
		ft_go(line, lemin, *zero_room);
	else
		free(line);
}

void	ft_ants(char *line, t_lemin *lemin)
{
	char	*c_line;
	int		number;

	c_line = line;
	if (lemin->ant_count)
		ft_error_manage(1, 1);
	number = ft_parse_line(&c_line);
	if (number < 0)
	{
		free(line);
		ft_error_manage(1, 1);
	}
	lemin->ant_count = number;
	free(line);
}

int		main(void)
{
	char	*line;
	t_lemin	*lemin;
	t_room	*zero_room;

	zero_room = ft_make_list();
	lemin = ft_make_lemin();
	while (get_next_line(0, &line) != -1)
	{
		if (line[0] == '#')
		{
			ft_command(line, lemin, &zero_room);
			continue;
		}
		else if (ft_all_digit(line))
			ft_ants(line, lemin);
		else if (!lemin->ant_count)
			ft_error_manage(2, 1);
		else if (ft_strchr(line, '-') && !ft_strchr(line, '#'))
			ft_take_info(line, 0, &zero_room, 0);
		else if (ft_strchr(line, ' ') && !ft_strchr(line, '#'))
			ft_take_info(line, 0, &zero_room, 1);
		else
			ft_go(line, lemin, zero_room);
	}
}
