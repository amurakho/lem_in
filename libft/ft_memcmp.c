/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 13:13:56 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/04 13:13:58 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *memptr1, const void *memptr2, size_t num)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)memptr1;
	str2 = (unsigned char*)memptr2;
	while (num--)
	{
		if (*str1 - *str2 != 0)
			return (*str1 - *str2);
		str2++;
		str1++;
	}
	return (0);
}
