/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:55:11 by amurakho          #+#    #+#             */
/*   Updated: 2018/09/12 18:55:13 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/lem_in.h"

int		ft_parse_line(char **line)
{
	size_t	counter;
	char	*s_number;
	int		number;
	char	*c_line;

	c_line = *line;
	counter = 0;
	while (ft_isdigit(c_line[counter]))
		counter++;
	if (!counter)
		return (-1);
	s_number = (char*)malloc(sizeof(char) * counter + 1);
	s_number = ft_strncpy(s_number, c_line, counter);
	s_number[counter] = '\0';
	if (!ft_all_digit(s_number))
		ft_error_manage(5, 1);
	number = ft_atoi(s_number);
	ft_strdel(&s_number);
	if (c_line[counter] == ' ' || c_line[counter] == '-')
		counter++;
	*line += counter;
	return (number);
}

int		*ft_parse_room(char *line, int is_room, int *numbers)
{
	char	**new_str;
	int		counter;

	if (ft_error(line, is_room))
		ft_error_manage(5, 1);
	new_str = ft_strsplit(line, ' ');
	counter = 0;
	while (counter != 3)
	{
		if (!ft_all_digit(new_str[counter]))
			ft_error_manage(5, 1);
		else
		{
			numbers[counter] = ft_atoi(new_str[counter]);
		}
		free(new_str[counter]);
		counter++;
	}
	free(new_str);
	return (numbers);
}

int		*ft_parse_link(char *line, int is_room, int *numbers)
{
	char	**new_str;
	int		counter;

	if (ft_error(line, is_room))
		ft_error_manage(5, 1);
	new_str = ft_strsplit(line, '-');
	counter = 0;
	while (counter != 2)
	{
		if (!ft_all_digit(new_str[counter]))
			ft_error_manage(5, 1);
		else
			numbers[counter] = ft_atoi(new_str[counter]);
		free(new_str[counter]);
		counter++;
	}
	free(new_str);
	return (numbers);
}

void	ft_take_info(char *line, int strt_end, t_room **zero_room, int is_room)
{
	int		*numbers;
	int		counter;
	char	*c_line;

	counter = -1;
	c_line = line;
	numbers = (int*)malloc(sizeof(int) * 3);
	if (is_room)
	{
		while (counter++ != 2)
			numbers[counter] = ft_parse_line(&c_line);
		if (ft_strlen(c_line))
			ft_error_manage(5, 1);
		*zero_room = ft_fill_room(*zero_room, numbers, strt_end);
	}
	else
	{
		while (counter++ != 1)
			numbers[counter] = ft_parse_line(&c_line);
		if (ft_strlen(c_line))
			ft_error_manage(5, 1);
		ft_find_link(*zero_room, numbers);
	}
	free(line);
	free(numbers);
}
