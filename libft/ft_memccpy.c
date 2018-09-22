/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 10:54:19 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/04 10:54:21 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *destination, const void *source, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	*source_str;

	source_str = (unsigned char*)source;
	str = (unsigned char*)destination;
	while (n--)
	{
		*str = *source_str;
		if (*source_str == (unsigned char)c)
			return ((void*)str + 1);
		if (n)
		{
			str++;
			source_str++;
		}
	}
	return (NULL);
}
