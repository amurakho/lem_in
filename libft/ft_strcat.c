/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 08:12:36 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/07 08:12:37 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *destination, const char *append)
{
	int counter;
	int a_counter;

	counter = 0;
	while (destination[counter] != '\0')
		counter++;
	a_counter = 0;
	while (append[a_counter] != '\0')
	{
		destination[counter + a_counter] = append[a_counter];
		a_counter++;
	}
	destination[counter + a_counter] = '\0';
	return (destination);
}
