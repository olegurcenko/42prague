/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:23:46 by oleg              #+#    #+#             */
/*   Updated: 2023/10/25 14:42:41 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	new_str = (char *)malloc(len + 1);
	if (!s || !(new_str))
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}

//int main()
//{
//    char *b = ft_substr("hello how are you?", 3, 10);

//    if (b != NULL)
//    {
//        printf("%s", b);
//        free(b); // Free the allocated memory
//    }
//    else
//    {
//        printf("Error: Unable to allocate memory for substring.\n");
//    }

//    return (0);
//}
