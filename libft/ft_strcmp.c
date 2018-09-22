/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 13:02:47 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/07 13:02:48 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *string1, const char *string2)
{
	unsigned char *new_str1;
	unsigned char *new_str2;

	new_str1 = (unsigned char*)string1;
	new_str2 = (unsigned char*)string2;
	while (*new_str1 || *new_str2)
	{
		if (*new_str1 - *new_str2 != 0)
			return (*new_str1 - *new_str2);
		new_str1++;
		new_str2++;
	}
	return (0);
}
