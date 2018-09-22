/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 14:12:23 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/07 14:12:25 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long int		number;
	int					minus;
	char				*new_str;

	minus = 0;
	new_str = (char*)str;
	while (*new_str == '\t' || *new_str == '\n' || *new_str == '\v'
		|| *new_str == '\f' || *new_str == '\r' || *new_str == ' ')
		new_str++;
	if (*new_str == '-' || *new_str == '+')
	{
		if (*new_str == '-')
			minus = 1;
		new_str++;
	}
	number = ft_makenb(new_str, minus);
	if (minus)
		number *= -1;
	return (number);
}
