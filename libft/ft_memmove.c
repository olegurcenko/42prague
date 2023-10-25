/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:40:27 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/24 23:00:10 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (d > s)
	{
		while (size-- > 0)
			d[size] = s[size];
	}
	else
	{
		while (i < size)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
//int main () {
//   const char src[50] = "https://www.tutorialspoint.com";
//   char dest[50];
//   strcpy(dest,"Heloooo!!");
//   printf("Before memcpy dest = %s\n", dest);
//   ft_memmove(&dest, &src, strsize(src)+1);
//   printf("After memcpy dest = %s\n", dest);
//   return(0);
//}
