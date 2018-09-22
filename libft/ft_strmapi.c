/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 12:23:31 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/01 12:23:33 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		counter;
	char	*new_str;

	if (!s || !f)
		return (NULL);
	counter = 0;
	while (s[counter] != '\0')
	{
		counter++;
	}
	new_str = (char*)malloc(counter + 1);
	if (new_str == NULL)
		return (NULL);
	counter = 0;
	while (s[counter] != '\0')
	{
		new_str[counter] = (*f)((unsigned int)counter, s[counter]);
		counter++;
	}
	new_str[counter] = '\0';
	return (new_str);
}
