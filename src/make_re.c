/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_re.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:56:56 by amurakho          #+#    #+#             */
/*   Updated: 2018/09/12 18:56:59 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lem_in.h"

void	ft_create_way(t_lemin *lemin)
{
	lemin->ways[lemin->way_number] = (t_way*)malloc(sizeof(t_way));
	lemin->ways[lemin->way_number]->number = lemin->start->how_deepst + 1;
	lemin->ways[lemin->way_number]->next = NULL;
	lemin->ways[lemin->way_number]->is_fill = 0;
}

void	ft_clear_room(t_room *c_room, t_way *c_way)
{
	while (c_room)
	{
		if (c_room->number == c_way->number)
			c_room->is_fill = 1;
		c_room = c_room->next;
	}
}

void	ft_clear(t_lemin *lemin, t_room *room)
{
	t_room	*c_room;
	t_way	*c_way;
	int		counter;

	counter = 0;
	c_room = room;
	c_way = lemin->ways[counter];
	while (counter <= lemin->way_number)
	{
		if (!c_way->next)
		{
			counter++;
			c_way = lemin->ways[counter];
		}
		else
		{
			c_way = c_way->next;
			ft_clear_room(c_room, c_way);
			c_room = room;
		}
	}
}

void	ft_make_re(t_room *rooms, t_lemin *lemin)
{
	t_room	*c_rooms;
	t_lemin	*c_lemin;
	t_turn	*to_del;

	c_lemin = lemin;
	c_rooms = rooms;
	while (c_lemin->turn)
	{
		to_del = c_lemin->turn->next;
		free(c_lemin->turn);
		c_lemin->turn = to_del;
	}
	while (c_rooms)
	{
		c_rooms->how_deepst = 0;
		c_rooms->is_fill = 0;
		c_rooms = c_rooms->next;
	}
	ft_clear(lemin, rooms);
	lemin->turn = (t_turn*)malloc(sizeof(t_turn));
	lemin->turn->next = NULL;
}
