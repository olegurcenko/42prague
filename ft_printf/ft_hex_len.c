/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:13:33 by oyurchen          #+#    #+#             */
/*   Updated: 2023/11/04 20:39:37 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned long int hex)
{
	int len = 0;

	if (hex == 0)
		len = 1;
	else
	{
		while (hex != 0)
		{
			len++;
			hex /= 16;
		}
	}
	return (len);
}
