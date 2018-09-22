/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 13:17:19 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/07 13:17:21 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *string1, const char *string2, size_t num)
{
	unsigned char *new_str1;
	unsigned char *new_str2;

	new_str1 = (unsigned char*)string1;
	new_str2 = (unsigned char*)string2;
	while ((*new_str1 || *new_str2) && num != 0)
	{
		if (*new_str1 - *new_str2 != 0)
			return (*new_str1 - *new_str2);
		new_str1++;
		new_str2++;
		num--;
	}
	return (0);
}
