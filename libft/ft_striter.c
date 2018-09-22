/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 11:59:03 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/01 11:59:09 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int counter;

	counter = 0;
	if (s && f)
	{
		while (s[counter] != '\0')
		{
			f(&s[counter]);
			counter++;
		}
	}
}
