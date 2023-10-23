/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:29:15 by oleg              #+#    #+#             */
/*   Updated: 2023/10/23 18:32:37 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

int				ft_strlen(const char *str);
int				ft_atoi(char *str);
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
int				ft_isdigit(char *str);
void			*ft_bzero(char *str, size_t bites);
int				ft_isalnum(char *str);
int				ft_isalpha(char *str);
int				ft_isascii(char *str);
int				ft_isprint(int str);
void			ft_memcpy(char *dest, const char *src, size_t size);
void			ft_memmove(void *dest, const void *src, size_t size);
void			*ft_memset(char *str, int symbol, size_t bites);
char			**ft_split(char const *s, char c);
char			*ft_strcat(char *dest, char *src);
size_t			ft_strlcpy(char *dest, char *src, size_t size);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
char			ft_toupper(char c);
char			ft_tolower(char c);
char			*ft_strchr(const char *str, int s);
char			*ft_strrchr(const char *str, int s);
void			*ft_memchr(const void *str, int c, size_t n);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));

/*
• memcmp
• strnstr
*/



#endif