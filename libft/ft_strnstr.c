/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 12:51:24 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/07 12:51:26 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *string1, const char *string2, size_t slen)
{
	if (!*string1 && !*string2)
		return ("");
	while (*string1)
	{
		if (slen < ft_strlen(string2))
			break ;
		if (ft_strlen(string1) < ft_strlen(string2))
			break ;
		if (ft_memcmp(string1, string2, ft_strlen(string2)) == 0)
			return ((char *)string1);
		slen--;
		string1++;
	}
	return (NULL);
}
