/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 16:33:59 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/07 16:34:02 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new_lst;

	new_lst = (t_list*)malloc(sizeof(t_list));
	if (new_lst == NULL)
		return (NULL);
	if (content == NULL)
	{
		new_lst->content = NULL;
		new_lst->content_size = 0;
		new_lst->next = NULL;
	}
	else
	{
		new_lst->content = (void*)malloc(sizeof(content_size));
		if (new_lst->content == NULL)
			return (NULL);
		ft_memcpy(new_lst->content, content, content_size);
		new_lst->content_size = content_size;
		new_lst->next = NULL;
	}
	return (new_lst);
}
