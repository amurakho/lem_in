/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 12:13:59 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/01 12:14:02 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*new_str;
	int		counter;

	counter = 0;
	if (!s || !f)
		return (NULL);
	while (s[counter] != '\0')
		counter++;
	if (!f || !s)
		return (NULL);
	new_str = (char*)malloc(counter + 1);
	if (new_str == NULL)
		return (NULL);
	counter = 0;
	while (s[counter] != '\0')
	{
		new_str[counter] = (*f)(s[counter]);
		counter++;
	}
	new_str[counter] = '\0';
	return (new_str);
}
