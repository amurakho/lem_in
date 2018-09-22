/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 13:06:35 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/04 13:06:36 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char *str;

	str = (unsigned char*)arr;
	while (n--)
	{
		if ((char)*str == (char)c)
			return ((void*)str);
		str++;
	}
	return (NULL);
}
