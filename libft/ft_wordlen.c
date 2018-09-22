/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 12:25:56 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/14 12:25:58 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordlen(char const *s, char c, int first, int flag)
{
	int counter;

	counter = first;
	while (s[counter] == c && s[counter] != '\0')
		counter++;
	first = counter;
	while (s[counter] != c && s[counter] != '\0')
		counter++;
	if (flag == 0)
		return (counter - first);
	else
		return (first);
}
