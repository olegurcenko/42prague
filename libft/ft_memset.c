/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:10:46 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/23 14:23:47 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *ft_memset(char *str, int symbol, size_t bites)
{
	while (bites-- != 0)
		*str++ = symbol;
    return ((void *)str);
}

int main() {
    char str[10];
	int b = 5;

    // Fill str with the ASCII value of 'A' (65)
    ft_memset(str, 56, b);

    // Print the result
    printf("%s\n", str);

    return 0;
}