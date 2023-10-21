/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleg <oleg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 20:16:41 by oleg              #+#    #+#             */
/*   Updated: 2023/10/21 21:04:28 by oleg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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

static int	concat(char *res, const char *src)
{
	int	i;

	i = 0;
	while (*src != '\0')
		res[i++] = *src ++;
	res[i] = '\0';
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;

	i = 0;
	result = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i += concat(result + i, s1);
	i += concat(result + i, s2);
	return (result);
}
//int main()
//{
//    char *b = ft_strjoin("hello how ", "are you?");

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