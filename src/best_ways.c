/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_ways.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 19:04:25 by amurakho          #+#    #+#             */
/*   Updated: 2018/09/12 19:04:26 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lem_in.h"

void	ft_find_best(t_lemin *lemin)
{
	int	max;
	int w_counter;
	int counter;

	w_counter = 0;
	counter = 0;
	max = lemin->ways[0]->number + lemin->ant_count;
	while (counter != lemin->ant_count && lemin->ways[w_counter])
	{
		if (w_counter && lemin->ways[w_counter]->number + 1 > max)
			lemin->ways_count = w_counter;
		else if (!w_counter || lemin->ways[w_counter]->number + 1
			== lemin->ways[w_counter - 1]->number)
		{
			lemin->ways[w_counter]->number++;
			counter++;
		}
		w_counter++;
		if (w_counter == lemin->ways_count)
			w_counter = 0;
	}
	ft_del_ways(lemin);
}
