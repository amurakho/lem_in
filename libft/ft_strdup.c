/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 16:02:46 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/03 16:02:48 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*new_str;
	int		len;
	int		counter;

	len = ft_strlen(str);
	new_str = ft_strnew(len);
	if (new_str == NULL)
		return (NULL);
	counter = 0;
	while (counter != len)
	{
		new_str[counter] = str[counter];
		counter++;
	}
	return (new_str);
}
