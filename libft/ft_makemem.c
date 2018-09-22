/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makemem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 12:20:43 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/14 12:23:56 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_makemem(char const *s1, char const *s2)
{
	char *new_str;

	if (!s1 || !s2)
		return (NULL);
	new_str = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	return (new_str);
}
