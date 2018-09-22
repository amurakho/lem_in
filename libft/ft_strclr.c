/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 10:59:47 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/01 10:59:49 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strclr(char *s)
{
	int counter;

	counter = 0;
	if (s != NULL)
	{
		while (s[counter] != '\0')
		{
			counter++;
		}
		ft_memset(s, '\0', counter);
	}
}
