/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 11:05:07 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/09 11:05:09 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char			*copy_dst;
	char			*copy_src;
	unsigned long	n;
	unsigned long	dlen;

	copy_dst = dst;
	copy_src = (char*)src;
	n = size;
	while (n-- != 0 && *copy_dst != '\0')
		copy_dst++;
	dlen = copy_dst - dst;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(copy_src));
	while (*copy_src != '\0')
	{
		if (n != 1)
		{
			*copy_dst++ = *copy_src;
			n--;
		}
		copy_src++;
	}
	*copy_dst = '\0';
	return (dlen + (copy_src - src));
}
