/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleg <oleg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 17:23:46 by oleg              #+#    #+#             */
/*   Updated: 2023/10/21 22:47:17 by oleg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;

	i = 0;
	result = malloc((len + 1) * sizeof(char));
	if ((result == NULL) || (start > ft_strlen(s)))
	{
		return (NULL);
	}
	while (s[start] != 0 && i != len)
	{
		result[i] = s[start];
		i++;
		start ++;
	}
	result[i] = 0;
	return (result);
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