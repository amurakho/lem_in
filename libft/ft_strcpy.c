/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 14:06:21 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/04 14:06:23 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *destptr, const char *srcptr)
{
	int counter;

	counter = 0;
	while (srcptr[counter] != '\0')
	{
		destptr[counter] = srcptr[counter];
		counter++;
	}
	destptr[counter] = '\0';
	return (destptr);
}
