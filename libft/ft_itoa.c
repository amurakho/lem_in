/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:22:16 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/03 14:22:19 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	int		counter;

	len = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	ft_findminus(&len, &n);
	len += ft_findlen(n) - 1;
	str = ft_strnew(len + 1);
	if (!str)
		return (NULL);
	counter = 1;
	while (n >= 10)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
		len--;
	}
	str[len] = n + '0';
	if (len != 0)
		str[0] = '-';
	return (str);
}
