/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:35:11 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/23 14:21:31 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	helper_isascii(char *str)
{
	return ((unsigned char)*str <= 127);
}

int	ft_isascii(char *str)
{
	while (*str != '\0')
	{
		if (!helper_isascii(str))
			return (0);
		str++;
	}
	return (1);
}


//int main() {
//    char str1[] = "Hello123";
//    char str2[] = "Non-ASCII: é";

//    if (ft_isascii(str1)) {
//        printf("'%s' contains only ASCII characters.\n", str1);
//    } else {
//        printf("'%s' contains non-ASCII characters.\n", str1);
//    }

//    if (ft_isascii(str2)) {
//        printf("'%s' contains only ASCII characters.\n", str2);
//    } else {
//        printf("'%s' contains non-ASCII characters.\n", str2);
//    }

//    return 0;
//}
