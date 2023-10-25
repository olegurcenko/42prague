/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:33:08 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/24 14:50:56 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!str || c == 0 || !n)
		return (NULL);
	while (i != n && ((unsigned char *)str)[i] != (unsigned char)c)
		i++;
	if (i < n)
		return ((void *)((unsigned char *)str + i));
	return (NULL);
}
//int main()
//{
//    const char str[] = "https://www.tutorialspoint.com";
//    const char ch = '.';
//    char *ret;
//    ret = ft_memchr(str, ch, 15);
//    if (ret != NULL)
//    {
//        printf("String after |%c| is - |%s|\n", ch, ret);
//    }
//    else
//    {
//        printf("Character |%c| not found in the string.\n", ch);
//    }
//    return 0;
//}
