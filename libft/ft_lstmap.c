/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 12:43:14 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/08 12:43:16 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_node;
	t_list *new_begin;

	if (!lst || !f)
		return (NULL);
	new_node = f(lst);
	new_begin = new_node;
	while (lst->next)
	{
		lst = lst->next;
		if (!(new_node->next = f(lst)))
		{
			free(lst);
			return (NULL);
		}
		new_node = new_node->next;
	}
	return (new_begin);
}
