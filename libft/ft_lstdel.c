/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 10:44:28 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/08 10:44:32 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*working_node;
	t_list	*clone_node;

	if (alst)
	{
		working_node = *alst;
		while (working_node)
		{
			clone_node = working_node->next;
			del(working_node->content, working_node->content_size);
			free(working_node);
			working_node = clone_node;
		}
		*alst = NULL;
	}
}
