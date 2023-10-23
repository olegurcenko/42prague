/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:14:21 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/23 18:33:33 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	len;
	size_t	i;

	i = -1;
	if (!s || !f)
		return;
	len = ft_strlen(s);
	while (i++ != len)
		f(i, &s[i]);
}

//void printCharWithIndex(unsigned int index, char *ch)
//{
//    printf("Character at index %u: %c\n", index, *ch);
//}

//int main()
//{
//    char str[] = "Hello, World!";

//    printf("Original string: %s\n", str);

//    // Applying ft_striteri to print each character with its index
//    ft_striteri(str, printCharWithIndex);

//    return 0;
//}
