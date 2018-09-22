/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 12:07:27 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/01 12:07:29 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int counter;

	counter = 0;
	if (s && f)
	{
		while (s[counter] != '\0')
		{
			(*f)((unsigned int)counter, &s[counter]);
			counter++;
		}
	}
}
