/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:56:51 by oleg              #+#    #+#             */
/*   Updated: 2023/10/25 16:03:47 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	skip(char const *s1, char const *set)
{
	int	len;
	int	i;

	len = ft_strlen(s1);
	i = 0;
	while (len > i && ft_strchr(set, s1[i]) != NULL)
		i++;
	return (i);
}

static int	skip_end(char const *s1, char const *set)
{
	int	len;
	int	i;

	len = ft_strlen(s1);
	i = 0;
	while (len > 0 && ft_strchr(set, s1[len - 1]) != NULL)
	{
		len--;
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		result_len;

	result_len = ft_strlen(s1) - skip(s1, set) - skip_end(s1, set);
	if (result_len <= 0)
	{
		result = malloc(1);
		result[0] = '\0';
		return (result);
	}
	i = 0;
	result = malloc(result_len + 1);
	if (result == NULL)
		return (NULL);
	while (i < result_len)
	{
		result[i] = s1[skip(s1, set) + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

//int main()
//{
//    const char *original = "   hello how are you   ";
//    const char *set = " ";

//    char *trimmed = ft_strtrim(original, set);

//    if (trimmed != NULL)
//    {
//        printf("Original: \"%s\"\n", original);
//        printf("Trimmed: \"%s\"\n", trimmed);
//        free(trimmed); // Free the allocated memory
//    }
//    else
//    {
//        printf("Error: Unable to allocate memory for trimmed string.\n");
//    }

//    return 0;
//}