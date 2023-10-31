/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_unsigned_digits.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:50:26 by oleg              #+#    #+#             */
/*   Updated: 2023/10/31 16:27:26 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	get_unsigned_digits(unsigned int n)
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
