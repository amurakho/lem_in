/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 10:18:24 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/04 10:18:26 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char *str;
	unsigned char *source_str;

	if (n == 0 || destination == source)
		return (destination);
	source_str = (unsigned char*)source;
	str = (unsigned char*)destination;
	while (--n)
	{
		*str = *source_str;
		str++;
		source_str++;
	}
	*str = *source_str;
	return (destination);
}
