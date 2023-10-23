/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:40:27 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/16 13:53:03 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void ft_memmove(void *dest, const void *src, size_t size)
{
	char *d = dest;
	const char *s = src;
	while (s != 0 && size-- != 0)
		*d++ = *s++;
}

int main () {
   const char src[50] = "https://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   ft_memmove(&dest, &src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   return(0);
}
