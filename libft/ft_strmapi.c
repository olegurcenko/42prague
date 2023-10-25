/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:38:24 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/24 15:14:15 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*res;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	while (i != len)
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
//char transformToUpper(unsigned int index, char c) {
//    // Convert the character to uppercase
//    if (c >= 'a' && c <= 'z') {
//        return c - 'a' + 'A';
//    }
//    return c;
//}
//int main()
//{
//    char *a = ft_strmapi("hello how are you", transformToUpper);
//    printf("%s", a);
//    free(a);
//    return 0;
//}
