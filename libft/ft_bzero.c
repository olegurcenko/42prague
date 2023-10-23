/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:35:07 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/23 14:25:35 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

static void	*ft_memset(char *str, int symbol, size_t bites)
{
	while (bites-- != 0)
		*str++ = symbol;
    return ((void *)str);
}

void	*ft_bzero(char *str, size_t bites)
{
	return (ft_memset(str, 0, bites));
}

int main() {
    char str[10];
	int b = 5;

    // Fill str with the ASCII value of 'A' (65)
    ft_bzero(str, b);

    // Print the result
    printf("%s\n", str);

    return 0;
}