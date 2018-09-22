/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:53:56 by amurakho          #+#    #+#             */
/*   Updated: 2018/09/12 18:53:59 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lem_in.h"

void	ft_make_ants(t_lemin *lemin)
{
	t_ant	*first_ant;
	int		counter;
	int		w_counter;

	first_ant = (t_ant*)malloc(sizeof(t_ant));
	first_ant->way = lemin->ways[0]->next;
	first_ant->number = 1;
	first_ant->next = NULL;
	lemin->ants = first_ant;
	counter = 1;
	w_counter = 1;
	while (counter != lemin->ant_count)
	{
		if (w_counter == lemin->ways_count
			|| lemin->ways[w_counter]->number == 0)
			w_counter = 0;
		counter = ft_make_ant(lemin, first_ant, w_counter);
		w_counter++;
	}
	ft_print_ant(lemin);
}

void	ft_make_free(t_lemin *lemin)
{
	int		counter;
	t_way	*c_ways;

	counter = 0;
	while (counter != lemin->ways_count && lemin->ways[counter])
	{
		c_ways = lemin->ways[counter];
		while (c_ways)
		{
			c_ways->is_fill = 0;
			c_ways = c_ways->next;
		}
		counter++;
	}
}

void	ft_print(t_ant *ants)
{
	if (ants->way && !ants->way->is_fill)
	{
		ft_putchar('L');
		ft_putnbr(ants->number);
		ft_putchar('-');
		ft_putnbr(ants->way->number);
		ft_putchar(' ');
		ants->way->is_fill = 1;
		ants->way = ants->way->next;
	}
	if (ants->way)
		ants->way->is_fill = 1;
}

void	ft_print_ant(t_lemin *lemin)
{
	t_ant	*ants;
	t_ant	*last;

	ants = lemin->ants;
	last = lemin->ants;
	while (last->next)
		last = last->next;
	while (last->way)
	{
		if (ants->number == last->number && ants->way && ants->way->is_fill)
		{
			ft_putchar('\n');
			ft_make_free(lemin);
			ants = lemin->ants;
		}
		else
		{
			ft_print(ants);
			if (ants->next)
				ants = ants->next;
		}
	}
}
