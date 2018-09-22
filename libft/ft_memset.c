/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 18:45:25 by amurakho          #+#    #+#             */
/*   Updated: 2018/03/30 18:45:27 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *destination, int val, size_t nb)
{
	unsigned char	*str;

	if (nb == 0)
		return (destination);
	str = (unsigned char*)destination;
	while (nb--)
	{
		*str = (unsigned char)val;
		if (nb)
			str++;
	}
	return (destination);
}
