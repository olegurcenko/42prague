/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleg <oleg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 23:40:06 by oleg              #+#    #+#             */
/*   Updated: 2023/10/30 00:43:04 by oleg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

static size_t	get_digits(int n)
{
	size_t	i;

	i = 1;
	while (n != 0)
	{
		n /= 10;
		if (n == 0)
			return (i);
		i++;
	}
	return (i);
}

//char	*ft_itoa(int n)
//{
//	char		*str_num;
//	size_t		digits;
//	long int	num;

//	num = n;
//	digits = get_digits(n);
//	if (n < 0)
//	{
//		num *= -1;
//		digits++;
//	}
//	str_num = (char *)malloc(sizeof(char) * (digits + 1));
//	if (!str_num)
//		return (NULL);
//	*(str_num + digits) = 0;
//	while (digits--)
//	{
//		*(str_num + digits) = num % 10 + '0';
//		num = num / 10;
//	}
//	if (n < 0)
//		*(str_num + 0) = '-';
//	return (str_num);
//}
int ft_putstr(char *str)
{
	int i = 0;
	//const char *c_value;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int print_helper(va_list ap, const char str)
{
	int value = 0;
	if (str == '%')
	{
		write(1, "%%", 1);
		return (1);
	}
	else if (str == 'c')
	{
		value = va_arg(ap, int);
		write(1, &value, 1);
		return (1);
	}
	else if (str == 's')
	{
		if (!str)
		{
			return (ft_putstr("(null)"));
		}
		else
		{
			return (ft_putstr(va_arg(ap, char *)));
		}
	}
	else if (str == 'd')
	{
		value = va_arg(ap, int);
		char *c_value = ft_itoa(value);
		ft_putstr(c_value);
		free(c_value);
		
	}
	return (0);
}

int ft_printf(const char *str, ...)
{
	va_list ap;
	int length = 0;
	int i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			length += print_helper(ap, str[i]);
		}
		else
		{
			length += write(1, &str[i], 1);
		}
		i++;
	}
	va_end(ap);
	return (length);
}

int main()
{
	printf("hello %c %s %d\n", 'g', "hello",  2147483647);
	ft_printf("hello %c %s %d\n", 'g', "hello",  2147483647);
	return (0);
}