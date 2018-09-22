/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 12:55:05 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/01 12:55:06 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int counter;

	counter = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[counter] != '\0' && counter != (int)n)
	{
		if (s1[counter] != s2[counter])
			return (0);
		counter++;
	}
	return (1);
}
