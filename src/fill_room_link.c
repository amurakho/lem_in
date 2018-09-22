/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_room_link.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 19:06:13 by amurakho          #+#    #+#             */
/*   Updated: 2018/09/14 19:06:15 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lem_in.h"

t_link	*ft_add_to_arr(t_link *links, int new_link)
{
	t_link	*n_link;
	t_link	*c_link;

	c_link = links;
	while (c_link)
	{
		if (c_link->number == new_link)
			return (links);
		c_link = c_link->next;
	}
	n_link = (t_link*)malloc(sizeof(t_link));
	n_link->number = new_link;
	if (!links)
		n_link->next = NULL;
	else
		n_link->next = links;
	return (n_link);
}

void	ft_find_link(t_room *zero_room, int *numbers)
{
	t_room	*c_zero_room;

	c_zero_room = zero_room;
	while (c_zero_room)
	{
		if (c_zero_room->number == numbers[0])
			c_zero_room->link = ft_add_to_arr(c_zero_room->link, numbers[1]);
		if (c_zero_room->number == numbers[1])
			c_zero_room->link = ft_add_to_arr(c_zero_room->link, numbers[0]);
		c_zero_room = c_zero_room->next;
	}
}

t_room	*ft_fill_room(t_room *zero_room, int *numbers, int strt_end)
{
	t_room	*new_room;
	t_room	*c_zero;

	new_room = (t_room*)malloc(sizeof(t_room));
	new_room->link = (t_link*)malloc(sizeof(t_link));
	new_room->link->number = -1;
	new_room->link->next = NULL;
	new_room->number = numbers[0];
	new_room->x = numbers[1];
	new_room->y = numbers[2];
	new_room->is_fill = 0;
	new_room->strt_end = strt_end;
	new_room->how_deepst = 0;
	c_zero = zero_room;
	while (c_zero)
	{
		if ((c_zero->x == new_room->x &&
			c_zero->y == new_room->y) || c_zero->number == new_room->number)
			ft_error_manage(6, 1);
		c_zero = c_zero->next;
	}
	new_room->next = zero_room;
	return (new_room);
}
