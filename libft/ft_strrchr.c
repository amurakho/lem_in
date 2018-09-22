/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 10:00:00 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/07 10:00:01 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int symbol)
{
	char	*ret;

	ret = (char*)string + ft_strlen(string);
	while (*ret != symbol)
	{
		if (ret == string)
			return (NULL);
		ret--;
	}
	return (ret);
}
