/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 19:03:29 by amurakho          #+#    #+#             */
/*   Updated: 2018/09/12 19:03:31 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lem_in.h"

int		ft_error(char *line, int r_l)
{
	int counter;
	int error;

	error = 0;
	counter = 0;
	if (!line)
		return (1);
	while (line[counter])
	{
		if ((line[counter] != ' ' &&
	!ft_isdigit(line[counter]) && r_l == 1) || error > 2)
			return (1);
		if ((line[counter] != '-' &&
	!ft_isdigit(line[counter]) && r_l == 0) || error > 1)
			return (1);
		counter++;
	}
	return (0);
}

void	ft_error_manage(int code, int if_exit)
{
	if (code == 1)
		ft_putstr("Error: Too much ants");
	else if (code == 2)
		ft_putstr("Error: Have no ants!");
	else if (code == 3)
		ft_putstr("Error! Have no ways!");
	else if (code == 4)
		ft_putstr("Error: Have no start/end!");
	else if (code == 5)
		ft_putstr("Error: Invalid data!");
	else if (code == 6)
		ft_putstr("Error: Invalid room x/y/number!");
	if (if_exit == 1)
		exit(1);
}
