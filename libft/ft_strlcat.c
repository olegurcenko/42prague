/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:53:29 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/24 20:03:29 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strncat(char *dest, char *src, int nb)
{
	char	*p;

	p = dest;
	while (*p)
		p++;
	while (nb-- > 0 && *src)
		*p++ = *src++;
	*p = 0;
	return (dest);
}

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	bytes;

	dstlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size <= dstlen)
		return (srclen + size);
	bytes = size - dstlen - 1;
	ft_strncat(dest, (char *)src, bytes);
	return (dstlen + srclen);
}
