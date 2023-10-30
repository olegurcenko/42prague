/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleg <oleg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 23:40:06 by oleg              #+#    #+#             */
/*   Updated: 2023/10/30 21:57:23 by oleg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"
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



int print_helper(va_list ap, const char str)
{
	unsigned int u_value = 0;
	int value = 0;
	int length = 0;
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
			return (ft_putstr("(null)"));
		else
			return (ft_putstr(va_arg(ap, char *)));
	}
	else if (str == 'd' || str == 'i')
	{
		value = va_arg(ap, int);
		char *c_value = ft_itoa(value);
		length = ft_putstr(c_value);
		free(c_value);
		return (length);
	}
	else if (str == 'p')
		length += ft_print_pointer(va_arg(ap, unsigned long long int));
	else if (str == 'u')
	{
		u_value = va_arg(ap, unsigned int);
		char *c_value = ft_unsigned_itoa(u_value);
		length = ft_putstr(c_value);
		free(c_value);
		return (length);
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
	int a = 5;
	printf("hello %c %s %d %p %lu\n", 'g', "hello",  2147483647, &a, 4294967295);
	ft_printf("hello %c %s %d %p %u\n", 'g', "hello",  2147483647, &a, 4294967295);
	return (0);
}