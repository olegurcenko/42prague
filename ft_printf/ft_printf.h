/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:46:26 by oleg              #+#    #+#             */
/*   Updated: 2023/11/04 20:24:21 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
size_t	get_digits(int n);
size_t	get_unsigned_digits(unsigned int n);
int		ft_printstr(char *str);
void	ft_put_ptr(unsigned long long num);
int		pointer_length(unsigned long long pointer);
char	*ft_unsigned_itoa(unsigned int nbr);
void	ft_put_hex(unsigned long int nbr, const char format);
char	*ft_itoa(int n);
void	ft_putchar(char c);
int		ft_hex_len(unsigned long int hex);

#endif