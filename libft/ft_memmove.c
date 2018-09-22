/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 12:21:06 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/04 12:21:09 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	unsigned char	*str;
	unsigned char	*source_str;
	unsigned int	counter;

	source_str = (unsigned char*)source;
	str = (unsigned char*)destination;
	counter = 0;
	if (source_str < str)
	{
		while (n--)
			str[n] = source_str[n];
	}
	else
		ft_memcpy(str, source_str, n);
	return (str);
}
