/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:35:11 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/24 21:51:51 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
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
