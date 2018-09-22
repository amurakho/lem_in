/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurakho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 18:43:34 by amurakho          #+#    #+#             */
/*   Updated: 2018/04/15 11:02:54 by amurakho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

int					get_next_line(const int fd, char **line);
int					ft_makenb(char *new_str, int minus);
int					ft_findlen(int n);
void				ft_findminus(int *len, int *n);
char				*ft_makelen(char const *s, int counter, int i);
char				**ft_makestr(int count, char **str, char const *s, char c);
int					ft_wordlen(char const *s, char c, int first, int flag);
int					ft_wordcount(char const *s, char c, int count, int counter);
char				*ft_makemem(char const *s1, char const *s2);
void				*ft_memalloc(size_t size);
void				*ft_memset(void *destination, int val, size_t nb);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlen(char const *str);
char				**ft_strsplit(char const *s, char c);
char				*ft_strtrim(char const *s);
void				ft_putchar(char c);
char				*ft_strdup(const char *str);
char				*ft_itoa(int n);
void				ft_putendl(char const *s);
void				ft_putstr(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *desti, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *arr, int c, size_t n);
int					ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
char				*ft_strcpy(char *dest, const char *srcptr);
char				*ft_strncpy(char *destptr, const char *srcptr, size_t num);
char				*ft_strcat (char *destination, const char *append);
char				*ft_strncat(char *destptr, char *srcptr, size_t num);
int					ft_strcmp(const char *string1, const char *string2);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *str, int ch);
int					ft_strncmp(const char *str1, const char *str2, size_t num);
char				*ft_strrchr(const char *string, int symbol);
char				*ft_strstr(const char *string1, const char *string2);
int					ft_atoi(const char *str);
int					ft_isalpha(int ch);
int					ft_isdigit(int character);
int					ft_isalnum(int ch);
int					ft_isascii(int ch);
int					ft_isprint(int ch);
int					ft_toupper(int character);
int					ft_tolower(int c);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
char				*ft_strnstr(const char	*big, const char *l, size_t len);

# define BUFF_SIZE 1
#endif
