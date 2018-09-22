/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 12:34:39 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/08 12:34:41 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*copy_node;

	copy_node = lst;
	while (copy_node->next)
	{
		f(copy_node);
		copy_node = copy_node->next;
	}
	f(copy_node);
}
