/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iginsaus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 09:25:17 by iginsaus          #+#    #+#             */
/*   Updated: 2023/12/14 11:34:50 by iginsaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H
# include <ctype.h>//isalpha,isdigit,isalnum,isascii,isprint
# include <string.h>//strlen,memset,bzero
# include <unistd.h>
# include <stdio.h>

//Libc functions.

int		ft_isalpha(int c);//1-checks is alphabetic.
int		ft_isdigit(int c);//2-checks is a digit.
int		ft_isalnum(int c);//3-checks is alphanumeric.
int		ft_isascii(int c);//4-checks is ascii(0 to 127).
int		ft_isprint(int c);//5-checks is printable.
size_t	ft_strlen(const char *s);//6-length of the string.
void	*ft_memset(void *b, int c, size_t len);//7-c value len bytes to *b.
int		ft_atoi(const char *str);
int		ft_lstsize(t_list *lst);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_itoa(int n);
char	*ft_strdup(const char *src);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
#endif
