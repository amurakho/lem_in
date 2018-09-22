/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makenb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 11:09:42 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/15 11:09:44 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_makenb(char *new_str, int minus)
{
	long long int		number;
	int					counter;

	number = 0;
	counter = 0;
	while (*new_str != '\0')
	{
		if (counter > 19)
		{
			if (minus)
				return (0);
			else
				return (-1);
		}
		if (*new_str < 48 || *new_str > 57)
			return (number);
		number = number * 10;
		number += *new_str - '0';
		new_str++;
		counter++;
	}
	return (number);
}
