/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_ways.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 19:03:50 by amurakho          #+#    #+#             */
/*   Updated: 2018/09/12 19:03:51 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lem_in.h"

int		ft_len_way(t_lemin *lemin, int w_counter)
{
	t_way	*c_way;
	int		counter;

	counter = 0;
	c_way = lemin->ways[w_counter]->next;
	while (c_way)
	{
		c_way = c_way->next;
		counter++;
	}
	return (counter);
}

void	ft_del_way(t_way *way, t_lemin *lemin)
{
	t_way	*c_way;

	while (way)
	{
		c_way = way->next;
		free(way);
		way = c_way;
	}
	lemin->ways_count--;
}

void	ft_del_ways(t_lemin *lemin)
{
	int counter;
	int size;

	counter = 0;
	while (counter < lemin->ways_count)
	{
		size = ft_len_way(lemin, counter);
		lemin->ways[counter]->number -= size;
		if (lemin->ways[counter]->number == 0)
		{
			ft_del_way(lemin->ways[counter], lemin);
			lemin->ways[counter] = NULL;
		}
		counter++;
	}
}
