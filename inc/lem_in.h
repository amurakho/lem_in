/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 19:03:08 by amurakho          #+#    #+#             */
/*   Updated: 2018/09/12 19:03:10 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include "../libft/libft.h"
# include <stdlib.h>

typedef struct		s_link
{
	int				number;
	struct s_link	*next;
}					t_link;

typedef struct		s_room {
	int				x;
	int				y;
	int				number;
	int				is_fill;
	struct s_room	*next;
	t_link			*link;
	int				strt_end;
	int				how_deepst;
}					t_room;

typedef struct		s_way
{
	int				number;
	int				is_fill;
	struct s_way	*next;
}					t_way;

typedef struct		s_turn
{
	int				number;
	struct s_turn	*next;
}					t_turn;

typedef	struct		s_ant
{
	int				number;
	t_way			*way;
	struct s_ant	*next;
}					t_ant;

typedef struct {
	int				ways_count;
	int				ant_count;
	t_way			**ways;
	int				way_number;
	t_room			*end;
	t_room			*start;
	t_turn			*turn;
	t_ant			*ants;
	int				deep;
	int				find;
}					t_lemin;

t_room				*ft_make_list();
t_lemin				*ft_make_lemin();
void				ft_take_info(char *line,
		int strt_end, t_room **zero_room, int is_room);
int					ft_error(char *line, int r_l);
int					ft_parse_line(char **line);
t_room				*ft_fill_room(t_room *zero_room,
		int *numbers, int strt_end);
void				ft_take_room(char *line, t_room **zero_room);
int					ft_all_digit(char *line);
void				ft_lem_se(t_room *rooms, t_lemin *lemin);
int					ft_take_best(t_lemin *lemin, t_room *rooms);
void				ft_make_re(t_room *rooms, t_lemin *lemin);
void				ft_create_way(t_lemin *lemin);
void				ft_new_part(int number, t_lemin *lemin, t_room *c_room);
int					ft_in_turn(t_room *rooms, int number);
int					ft_make_ant(t_lemin *lemin, t_ant *first_ant, int w_number);
void				ft_find_best(t_lemin *lemin);
void				ft_make_ants(t_lemin *lemin);
void				ft_print_ant(t_lemin *lemin);
void				ft_del_ways(t_lemin *lemin);
void				ft_error_manage(int code, int if_exit);
int					ft_len_way(t_lemin *lemin, int w_counter);
void				ft_kill(t_lemin *lemin, t_room *rooms);
void				ft_play(t_room *rooms, t_lemin *lemin);
void				ft_find_link(t_room *zero_room, int *numbers);
#endif
