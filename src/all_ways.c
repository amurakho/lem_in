/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_ways.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:58:55 by amurakho          #+#    #+#             */
/*   Updated: 2018/09/12 18:58:56 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lem_in.h"

int		ft_make_round(t_room *room, t_lemin *lemin)
{
	t_room	*c_room;
	t_link	*c_link;

	c_link = lemin->start->link;
	c_room = room;
	while (c_link->next)
	{
		if (c_link->number == lemin->end->number)
			return (lemin->end->how_deepst = lemin->start->how_deepst + 1);
		while (c_room->next)
		{
			if (c_room->number == c_link->number)
			{
				if (!ft_in_turn(room, c_room->number))
					ft_new_part(c_room->number, lemin, c_room);
				break ;
			}
			c_room = c_room->next;
		}
		c_room = room;
		c_link = c_link->next;
	}
	return (0);
}

t_room	*ft_change_start(t_room *rooms, t_lemin *lemin)
{
	t_turn	*c_turn;
	t_room	*c_rooms;

	c_turn = lemin->turn;
	if (!c_turn)
		return (NULL);
	c_rooms = rooms;
	while (c_turn->number != c_rooms->number)
		c_rooms = c_rooms->next;
	lemin->start = c_rooms;
	return (c_rooms);
}

t_way	*ft_add_to_way(t_way *way, t_room *last_room)
{
	t_way	*c_way;
	t_way	*new_part;

	c_way = way;
	new_part = (t_way*)malloc(sizeof(t_way));
	new_part->number = last_room->number;
	new_part->is_fill = 0;
	if (c_way)
		new_part->next = c_way;
	else
		new_part->next = NULL;
	return (new_part);
}

t_way	*ft_make_way(t_room *rooms, t_lemin *lemin, t_way *c_way)
{
	t_room	*c_room;
	t_link	*last_link;

	c_room = rooms;
	last_link = lemin->end->link;
	while (last_link)
	{
		while (c_room)
		{
			if (c_room->number == last_link->number
				&& c_room->how_deepst == lemin->end->how_deepst - 1)
			{
				c_way = ft_add_to_way(c_way, lemin->end);
				lemin->end = c_room;
				last_link = lemin->end->link;
				break ;
			}
			c_room = c_room->next;
		}
		if (!c_room)
			last_link = last_link->next;
		c_room = rooms;
	}
	return (c_way);
}

int		ft_take_best(t_lemin *lemin, t_room *rooms)
{
	t_turn	*c_turn;
	t_way	*c_way;

	while (!lemin->find)
	{
		if (ft_make_round(rooms, lemin))
			break ;
		c_turn = lemin->turn;
		free(lemin->turn);
		lemin->turn = c_turn->next;
		lemin->start = ft_change_start(rooms, lemin);
		if (!lemin->start)
			return (0);
	}
	ft_create_way(lemin);
	c_way = NULL;
	lemin->ways[lemin->way_number]->next = ft_make_way(rooms, lemin, c_way);
	ft_make_re(rooms, lemin);
	lemin->way_number++;
	return (1);
}
