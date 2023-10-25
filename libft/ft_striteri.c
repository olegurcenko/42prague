/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 18:14:21 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/24 21:44:06 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
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
