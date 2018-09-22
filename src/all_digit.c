/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_digit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 19:04:41 by amurakho          #+#    #+#             */
/*   Updated: 2018/09/12 19:04:46 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lem_in.h"

int		ft_all_digit(char *line)
{
	int counter;

	counter = 0;
	while (line[counter])
	{
		if (!ft_isdigit(line[counter]))
			return (0);
		counter++;
	}
	if (counter == 0)
		return (0);
	return (1);
}
