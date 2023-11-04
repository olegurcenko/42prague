/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:05:26 by oyurchen          #+#    #+#             */
/*   Updated: 2023/11/04 20:34:06 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_hex(unsigned long int nbr, const char format)
{
	if (nbr >= 16)
	{
		ft_put_hex(nbr / 16, format);
		ft_put_hex(nbr % 16, format);
	}
	else
	{
		if (nbr <= 9)
			ft_putchar((nbr + '0'));
		else
		{
			if (format == 'x')
				ft_putchar(nbr - 10 + 'a');
			else if (format == 'X')
				ft_putchar(nbr - 10 + 'A');
		}
	}
}
