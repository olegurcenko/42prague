/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:47:21 by oleg              #+#    #+#             */
/*   Updated: 2023/10/25 17:30:07 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static void	free_str(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static int	count_words(const char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			word++;
		i++;
	}
	return (word);
}

static int	get_word_length(const char *s, char c, int start)
{
	int	len;

	len = 0;
	while (s[start + len] && s[start + len] != c)
		len++;
	return (len);
}

static char	*allocate_and_copy_word(const char *s, char c, int start)
{
	int		len;
	char	*word;

	len = get_word_length(s, c, start);
	word = (char *)malloc(len + 1);
	if (word)
	{
		ft_strlcpy(word, s + start, len + 1);
		word[len] = '\0';
	}
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;

	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	i = 0;
	j = 0;
	while (i < count_words(s, c))
	{
		if (s[j] && s[j] != c)
		{
			result[i++] = allocate_and_copy_word(s, c, j);
			if (!result[i - 1])
			{
				free_str(result);
				return (NULL);
			}
			j += get_word_length(s, c, j);
		}
		else
			j++;
	}
	result[count_words(s, c)] = NULL;
	return (result);
}

//int main(int argc, char *argv[])
//{
//    char **strs;

//    if (argc == 3)
//    {
//        printf("str: %s\n", argv[1]);
//        printf("sep: %s\n", argv[2]);
//        strs = ft_split(argv[1], argv[2][0]);
//        if (strs)
//        {
//            char **tmp = strs;
//            while (*tmp)
//            {
//                printf("%s\n", *tmp);
//                free(*tmp);
//                tmp++;
//            }
//            free(strs);
//        }
//    }
//    printf("\n");
//    return 0;
//}