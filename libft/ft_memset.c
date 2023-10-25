/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:10:46 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/24 22:39:33 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *str, int symbol, size_t bites)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	while (bites-- != 0)
		*ptr++ = (unsigned char)symbol;
	return (str);
}
//int main() {
//    char str[10];
//	int b = 5;
//    // Fill str with the ASCII value of 'A' (65)
//    ft_memset(str, 56, b);
//    // Print the result
//    printf("%s\n", str);
//    return 0;
//}
