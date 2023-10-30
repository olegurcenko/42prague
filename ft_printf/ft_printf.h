/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleg <oleg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:46:26 by oleg              #+#    #+#             */
/*   Updated: 2023/10/30 21:55:48 by oleg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

size_t	get_digits(int n);
size_t	get_unsigned_digits(unsigned int n);
int ft_putstr(char *str);
void	ft_put_ptr(unsigned long long num);
int pointer_length(unsigned long long pointer);
char  *ft_unsigned_itoa(unsigned int nbr);




#endif