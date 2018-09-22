/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makestr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 12:24:29 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/14 12:24:31 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_makestr(int word_count, char **new_str, char const *s, char c)
{
	int first;
	int len;
	int counter;

	first = ft_wordlen(s, c, 0, 1);
	len = ft_wordlen(s, c, first, 0);
	counter = 0;
	*new_str = (char*)malloc(sizeof(char) * (len + 1));
	new_str[counter] = ft_strsub(s, first, len);
	new_str[counter][len] = '\0';
	len = len + first;
	counter++;
	while (counter != word_count)
	{
		first = ft_wordlen(s, c, len, 1);
		len = ft_wordlen(s, c, first, 0);
		new_str[counter] = (char*)malloc(sizeof(char) * (len + 1));
		new_str[counter] = ft_strsub(s, first, len);
		new_str[counter][len] = '\0';
		len = len + first;
		counter++;
	}
	new_str[counter] = NULL;
	return (new_str);
}
