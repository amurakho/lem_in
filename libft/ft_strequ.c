/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 12:47:10 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/01 12:47:12 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	int counter;

	counter = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[counter] != '\0')
	{
		if (s1[counter] != s2[counter])
			return (0);
		counter++;
	}
	if (s2[counter] != '\0')
		return (0);
	return (1);
}
