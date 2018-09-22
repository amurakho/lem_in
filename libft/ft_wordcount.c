/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 12:26:44 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/14 12:26:45 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(char const *s, char c, int counter, int word_counter)
{
	while (s[counter] == c && s[counter] != '\0')
		counter++;
	if (s[counter] == '\0')
		return (word_counter);
	word_counter++;
	while (s[counter] != c && s[counter] != '\0')
		counter++;
	return (ft_wordcount(s, c, counter, word_counter));
}
