/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:06:09 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/24 14:28:52 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t	i;

	i = 0;
	if (ptr1 == NULL && ptr2 == NULL)
		return (0);
	while (i < num && ((unsigned char *)ptr1)[i] == ((unsigned char *)ptr2)[i])
		i++;
	if (i == num)
		return (0);
	return (((unsigned char *)ptr1)[i] - ((unsigned char *)ptr2)[i]);
}

//int main ()
//{
//  char buffer1[] = "DWgaOtP12df0";
//  char buffer2[] = "DWGAOTP12DF0";

//  int n;

//  n=ft_memcmp (buffer1, buffer2, 3);

//  if (n>0) printf ("'%s' is greater than '%s'.\n",buffer1,buffer2);
//  else if (n<0) printf ("'%s' is less than '%s'.\n",buffer1,buffer2);
//  else printf ("'%s' is the same as '%s'.\n",buffer1,buffer2);

//  return 0;
//}