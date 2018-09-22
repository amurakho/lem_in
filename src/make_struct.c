/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   make_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:52:23 by amurakho          #+#    #+#             */
/*   Updated: 2018/09/12 18:52:25 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lem_in.h"

int		ft_make_ant(t_lemin *lemin, t_ant *first_ant, int w_number)
{
	t_ant	*new_ant;
	t_ant	*c_ant;

	new_ant = first_ant;
	while (new_ant->next)
		new_ant = new_ant->next;
	c_ant = (t_ant*)malloc(sizeof(t_ant));
	c_ant->number = new_ant->number + 1;
	c_ant->next = NULL;
	c_ant->way = lemin->ways[w_number]->next;
	lemin->ways[w_number]->number--;
	new_ant->next = c_ant;
	return (c_ant->number);
}

t_room	*ft_make_list(void)
{
	t_room	*room;

	room = (t_room*)malloc(sizeof(t_room));
	room->number = -1;
	room->x = -1;
	room->y = -1;
	room->link = (t_link*)malloc(sizeof(t_link));
	room->link->next = NULL;
	room->link->number = -1;
	room->next = NULL;
	return (room);
}

t_lemin	*ft_make_lemin(void)
{
	t_lemin	*lemin;

	lemin = (t_lemin*)malloc(sizeof(t_lemin));
	lemin->ways_count = 0;
	lemin->ant_count = 0;
	lemin->way_number = 0;
	lemin->find = 0;
	lemin->deep = 0;
	lemin->turn = (t_turn*)malloc(sizeof(t_turn));
	lemin->turn->next = NULL;
	lemin->ways = (t_way**)malloc(sizeof(t_way*) * 100);
	return (lemin);
}
