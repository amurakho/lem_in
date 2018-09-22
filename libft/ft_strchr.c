/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 09:34:38 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/07 09:34:40 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int ch)
{
	char	*new_str;

	new_str = (char*)str;
	while (*new_str != (char)ch)
	{
		if (*new_str == '\0')
			return (NULL);
		new_str++;
	}
	return (new_str);
}
