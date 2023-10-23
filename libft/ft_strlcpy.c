/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/10 20:53:05 by msousa            #+#    #+#             */
/*   Updated: 2023/10/23 15:09:53 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

static void	fill_remainder(size_t size, size_t length, char *dest)
{
	while (size > length)
	{
		*dest = '\0';
		dest++;
		size--;
	}
}

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	length;

	length = 0;
	if (size > 0)
		while (*src != '\0')
		{
			if (length == size)
				break ;
			*dest = *src;
			src++;
			dest++;
			length++;
		}
	*dest = '\0';
	fill_remainder(size, length, dest);
	while (*src != '\0')
	{
		length++;
		src++;
	}
	return (length);
}