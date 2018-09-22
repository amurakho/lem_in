/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 19:06:46 by amurakho          #+#    #+#             */
/*   Updated: 2018/09/14 19:06:50 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lem_in.h"

void	ft_kill_lemin(t_lemin *lemin)
{
	int		counter;
	t_way	*c_way;
	t_ant	*c_ant;

	counter = 0;
	while (lemin->ways[counter])
	{
		c_way = lemin->ways[counter]->next;
		free(lemin->ways[counter]);
		lemin->ways[counter] = c_way;
		if (!lemin->ways[counter])
			counter++;
	}
	free(lemin->ways);
	while (lemin->ants)
	{
		c_ant = lemin->ants->next;
		free(lemin->ants);
		lemin->ants = c_ant;
	}
}

void	ft_kill_room(t_room *rooms)
{
	t_room	*c_rooms;
	t_link	*c_link;

	c_rooms = rooms;
	while (rooms)
	{
		while (rooms->link)
		{
			c_link = rooms->link->next;
			free(rooms->link);
			rooms->link = c_link;
		}
		c_rooms = c_rooms->next;
		free(rooms);
		rooms = c_rooms;
	}
}

void	ft_kill(t_lemin *lemin, t_room *rooms)
{
	t_turn	*c_turn;

	ft_kill_lemin(lemin);
	while (lemin->turn)
	{
		c_turn = lemin->turn->next;
		free(lemin->turn);
		lemin->turn = c_turn;
	}
	free(lemin);
	ft_kill_room(rooms);
}
