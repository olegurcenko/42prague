/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 23:40:06 by oleg              #+#    #+#             */
/*   Updated: 2023/11/04 20:41:57 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "ft_printf.h"

int	print_hex(unsigned int num, char format)
{
	int	length;

	length = 0;
	if (num == 0)
		length += write(1, "0", 1);
	else
	{
		ft_put_hex(num, format);
		length += ft_hex_len(num);
	}
	return (length);
}

int	print_pointer(unsigned long long num)
{
	int					length;

	length = 0;
	if (!num)
	{
		length += write(1, "(nil)", 5);
	}
	else
	{
		length += write(1, "0x", 2);
		ft_put_ptr(num);
		length += pointer_length(num);
	}
	return (length);
}

int	print_helper_p2(va_list ap, const char str)
{
	unsigned int	u_value;
	int				length;
	int				value;
	char			*c_value;

	u_value = 0;
	value = 0;
	length = 0;
	if (str == 'd' || str == 'i')
	{
		value = va_arg(ap, int);
		c_value = ft_itoa(value);
		length = ft_printstr(c_value);
		free(c_value);
	}
	else if (str == 'p')
		length += print_pointer(va_arg(ap, unsigned long long int));
	else if (str == 'u')
	{
		u_value = va_arg(ap, unsigned int);
		c_value = ft_unsigned_itoa(u_value);
		length = ft_printstr(c_value);
		free(c_value);
	}
	else if (str == 'x' || str == 'X')
	{
		u_value = va_arg(ap, unsigned long int);
		length += ft_hex_len(u_value);
		ft_put_hex(u_value, str);
	}
	return (length);
}

int	print_helper_p1(va_list ap, const char str)
{
	int				length;
	int				value;

	value = 0;
	length = 0;
	if (str == '%')
	{
		length += write(1, "%%", 1);
	}
	else if (str == 'c')
	{
		value = va_arg(ap, int);
		length += write(1, &value, 1);
	}
	else if (str == 's')
	{
	    length += ft_printstr(va_arg(ap, char *));
	}
	return (length);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		length;
	int		i;

	length = 0;
	i = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			length += print_helper_p1(ap, str[i]);
			length += print_helper_p2(ap, str[i]);
		}
		else
		{
			write(1, &str[i], 1);
			length++;
		}
		i++;
	}
	va_end(ap);
	return (length);
}

//int main()
//{
////	int a = 5;
////	printf("%c %s %d %p %lu %% %i\n", 'g', "hello",  
////2147483647, &a, 4294967295, 2147483647);
////	ft_printf("%c %s %d %p %u %% %i\n", 'g', "hello",  
////2147483647, &a, 4294967295, 2147483647);
//	//char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";
	
//	////ft_printf(" %s %s ", " - ", "");
//	////printf(".\n");
//	////printf(" %s %s ", " - ", "");
//	////int c = ft_printf(" %s %s %s %s ", " - ", "", "4", "");
//	//int c = ft_printf(" %s %s %s %s ", " - ", "", "4", s2);
//	//printf("\n");
//	//int g = printf(" %s %s %s %s ", " - ", "", "4", s2);
//	int a = ft_printf(" %x ", 0);
//	printf("\n");
//	int b = printf(" %x ", 0);
//	printf("\n");
//	printf("%d %d", a, b);
//	return (0);
//}