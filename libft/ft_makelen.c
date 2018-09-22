/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_makelen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 12:28:53 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/14 12:28:54 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_makelen(char const *s, int counter, int i)
{
	int		s_counter;
	char	*new_str;

	if (counter < 0)
		counter = 0;
	new_str = (char*)malloc(counter + 1);
	if (new_str == NULL)
		return (NULL);
	s_counter = 0;
	while (s_counter != counter)
	{
		new_str[s_counter] = s[i];
		s_counter++;
		i++;
	}
	new_str[s_counter] = '\0';
	return (new_str);
}
