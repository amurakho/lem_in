/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 14:40:23 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/04 14:40:25 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *destptr, const char *srcptr, size_t num)
{
	unsigned int counter;

	counter = 0;
	while (srcptr[counter] != '\0' && num > 0)
	{
		destptr[counter] = srcptr[counter];
		counter++;
		num--;
	}
	while (num > 0)
	{
		destptr[counter] = '\0';
		counter++;
		num--;
	}
	return (destptr);
}
