/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer_length.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 21:54:33 by oleg              #+#    #+#             */
/*   Updated: 2023/10/31 16:31:20 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pointer_length(unsigned long long pointer)
{
	int	i;

	i = 0;
	while (pointer != 0)
	{
		i++;
		pointer /= 16;
	}
	return (i);
}
