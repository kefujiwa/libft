/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kefujiwa <kefujiwa@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 15:27:39 by kefujiwa          #+#    #+#             */
/*   Updated: 2021/06/11 18:19:46 by kefujiwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct s_dlist
{
	void			*content;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}	t_dlist;

/*
** mem section
*/

void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t count, size_t size);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);

/*
** char section
*/

int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_isspace(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);

/*
** digit section
*/
int					ft_atoi(const char *str);
int					ft_atoi_base(char *str, char *base);
long				ft_atol(const char *str);
int					ft_cnt_digits(int num);

/*
** str section (without memory allocation)
*/

char				*ft_strchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlen(const char *s);
char				*ft_strnstr(const char *haystack,
						const char *needle, size_t len);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strrchr(const char *s, int c);

/*
** str section (with memory allocation)
*/

char				*ft_itoa(int n);
char				**ft_split(char const *s, char c);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strdup(const char *s1);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strtrim(char const *s1, char const *set);

/*
** put section
*/

void				ft_putchar_fd(char c, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char *s, int fd);

/*
** list section
*/

void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void*));
void				ft_lstdelone(t_list *lst, void (*del)(void*));
void				ft_lstiter(t_list *lst, void (*f)(void*));
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst,
						void *(*f)(void*), void (*del)(void*));
t_list				*ft_lstnew(void *content);
int					ft_lstsize(t_list *lst);
void				ft_lstsort(t_list **begin_list, int (*cmp)());

/*
** dlist section
*/

void				ft_dlstadd_back(t_dlist **lst, t_dlist *new);
void				ft_dlstadd_front(t_dlist **lst, t_dlist *new);
void				ft_dlstclear(t_dlist **lst, void (*del)(void*));
void				ft_dlstdelone(t_dlist *lst, void (*del)(void*));
void				ft_dlstiter(t_dlist *lst, void (*f)(void*));
t_dlist				*ft_dlstlast(t_dlist *lst);
t_dlist				*ft_dlstmap(t_dlist *lst,
						void *(*f)(void*), void (*del)(void*));
t_dlist				*ft_dlstnew(void *content);
int					ft_dlstsize(t_dlist *lst);

/*
** get_next_line
*/

int					get_next_line(int fd, char **line);

#endif
