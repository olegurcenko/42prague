/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:29:15 by oleg              #+#    #+#             */
/*   Updated: 2023/10/25 13:37:59 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

void			*ft_memcpy(void *str1, const void *str2, size_t n);
size_t			ft_strlen(const char *str);
int				ft_atoi(char *str);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
int				ft_isalpha(int c);
char			*ft_itoa(int n);
int				ft_isdigit(int c);
void			*ft_bzero(char *str, size_t bites);
int				ft_isalnum(char c);
int				ft_isascii(int c);
int				ft_isprint(int str);
void			*ft_memmove(void *dest, const void *src, size_t size);
void			*ft_memset(char *str, int symbol, size_t bites);
char			**ft_split(char const *s, char c);
char			*ft_strcat(char *dest, char *src);
size_t			ft_strlcpy(char *dest, const char *src, size_t size);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
size_t			ft_strlcat(char *dest, char *src, size_t size);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			ft_toupper(char c);
char			*ft_strdup(const char *src);
char			ft_tolower(char c);
char			*ft_strchr(const char *str, int s);
char			*ft_strrchr(const char *str, int s);
void			*ft_memchr(const void *str, int c, size_t n);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
int				ft_memcmp(const void *ptr1, const void *ptr2, size_t num);
char			*ft_strnstr(const char *haystack,
					const char *needle, size_t len);
void			*ft_calloc(size_t nitems, size_t size);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

#endif