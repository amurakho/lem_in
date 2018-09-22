/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 17:17:08 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/07 17:17:10 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	int		word_count;
	char	**new_str;

	if (!s)
		return (NULL);
	word_count = ft_wordcount(s, c, 0, 0);
	new_str = (char**)malloc(sizeof(char*) * (word_count + 1));
	if (new_str == NULL)
		return (NULL);
	if (word_count > 0)
		new_str = ft_makestr(word_count, new_str, s, c);
	if (word_count == 0)
		new_str[0] = NULL;
	if (word_count < 0)
		return (NULL);
	return (new_str);
}
