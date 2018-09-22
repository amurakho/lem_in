/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 08:50:20 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/07 08:50:22 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *destination, char *append, size_t num)
{
	unsigned long counter;
	unsigned long a_counter;

	counter = 0;
	while (destination[counter] != '\0')
		counter++;
	a_counter = 0;
	while (append[a_counter] != '\0' && a_counter != num)
	{
		destination[counter + a_counter] = append[a_counter];
		a_counter++;
	}
	destination[counter + a_counter] = '\0';
	return (destination);
}
