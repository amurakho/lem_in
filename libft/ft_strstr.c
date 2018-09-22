/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 10:40:54 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/07 10:40:55 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *string1, const char *string2)
{
	char	*new_str1;
	int		len;

	new_str1 = NULL;
	len = ft_strlen(string2);
	if ((char)string1[0] == '\0' && (char)string2[0] == '\0')
		return ((char*)string1);
	while (*string1)
	{
		if (!ft_strncmp(string1, string2, len))
		{
			new_str1 = (char*)string1;
			break ;
		}
		string1++;
	}
	return (new_str1);
}
