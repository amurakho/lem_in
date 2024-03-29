/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/01 13:57:00 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/01 13:57:01 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int	c;
	int	i;

	if (!s)
		return (NULL);
	c = 0;
	i = 0;
	while (s[c] != '\0')
		c++;
	while (s[c - 1] == ' ' || s[c - 1] == '\n' || s[c - 1] == '\t')
		c--;
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
	{
		i++;
		c--;
	}
	return (ft_makelen(s, c, i));
}
