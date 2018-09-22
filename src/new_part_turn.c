/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_part_turn.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:55:40 by amurakho          #+#    #+#             */
/*   Updated: 2018/09/12 18:55:41 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lem_in.h"

int		ft_in_turn(t_room *rooms, int number)
{
	t_room	*c_rooms;

	c_rooms = rooms;
	while (c_rooms->next)
	{
		if (c_rooms->number == number)
		{
			if (c_rooms->is_fill)
				return (1);
			else
				return (0);
		}
		c_rooms = c_rooms->next;
	}
	return (0);
}

void	ft_new_part(int number, t_lemin *lemin, t_room *c_room)
{
	t_turn	*new_part;
	t_turn	*c_turn;

	c_turn = lemin->turn;
	while (c_turn->next)
		c_turn = c_turn->next;
	new_part = (t_turn*)malloc(sizeof(t_turn));
	new_part->number = number;
	new_part->next = NULL;
	c_turn->next = new_part;
	c_room->how_deepst = lemin->start->how_deepst + 1;
	c_room->is_fill = 1;
}
