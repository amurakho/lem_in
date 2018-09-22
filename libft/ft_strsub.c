/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 13:01:54 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/01 13:01:55 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*new_str;
	unsigned int	counter;

	if (!s)
		return (NULL);
	new_str = (char*)malloc(len + 1);
	if (new_str == NULL)
		return (NULL);
	counter = 0;
	while (s[start] != '\0' && counter != (unsigned int)len)
	{
		new_str[counter] = s[start];
		counter++;
		start++;
	}
	new_str[counter] = '\0';
	return (new_str);
}
