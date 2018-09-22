/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 14:50:24 by amurakho          #+#    #+#             */
/*   Updated: 2018/05/26 15:12:36 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*makefull(char *str, char *temp)
{
	int		old_size;
	int		temp_size;
	char	*full_str;

	temp_size = 0;
	old_size = 0;
	if (temp)
		temp_size = ft_strlen(temp);
	if (str)
		old_size = ft_strlen(str);
	full_str = (char *)malloc(sizeof(*full_str) * (old_size + temp_size + 1));
	ft_memcpy(full_str + old_size, temp, temp_size);
	ft_memcpy(full_str, str, old_size);
	ft_bzero(temp, BUFF_SIZE + 1);
	free(str);
	full_str[old_size + temp_size] = '\0';
	return (full_str);
}

int		makeline(char **str, char **temp, char **line)
{
	int		counter;
	char	*temp1;

	counter = 0;
	*str = makefull(*str, *temp);
	temp1 = *str;
	while (temp1[counter] != '\n' && temp1[counter])
		counter++;
	if (temp1[counter] == '\n')
	{
		temp1[counter] = '\0';
		*line = ft_strdup(temp1);
		*str = ft_strdup(temp1 + counter + 1);
		free(temp1);
		return (1);
	}
	return (0);
}

int		badfunc2(int ret, char **str, char **l, char **t)
{
	if (ret <= 0)
		free(*t);
	if (ft_strlen(*str) > 0)
	{
		*l = ft_strdup(*str);
		ft_strdel(&*str);
		return (1);
	}
	return (0);
}

int		badfunc1(char **l, int fd, char **t)
{
	if (!l || BUFF_SIZE <= 0 || fd < 0 || (read(fd, *t, 0) < 0) || fd >= 4864)
	{
		free(*t);
		return (-1);
	}
	return (0);
}

int		get_next_line(int const fd, char **l)
{
	static char	*str[4864];
	char		*t;
	int			res;
	int			ret;

	t = ft_strnew(BUFF_SIZE);
	if (badfunc1(l, fd, &t) == -1)
		return (-1);
	while ((ret = read(fd, t, BUFF_SIZE)) > 0)
	{
		res = makeline(&str[fd], &t, l);
		free(t);
		if (res == 1)
			return (1);
		t = ft_strnew(BUFF_SIZE);
	}
	if ((res = makeline(&str[fd], &t, l)))
	{
		free(t);
		return (1);
	}
	if (badfunc2(ret, &str[fd], l, &t))
		return (1);
	return (res);
}
