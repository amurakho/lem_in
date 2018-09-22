/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/16 10:41:21 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/16 10:41:22 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>

double	ft_sqrt(double val)
{
	double counter;

	counter = 1;
	if (val <= 0)
	{
		return (0);
	}
	while (counter * counter != val)
	{
		counter++;
	}
	return (counter);
}
