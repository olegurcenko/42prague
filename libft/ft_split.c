/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleg <oleg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:47:21 by oleg              #+#    #+#             */
/*   Updated: 2023/10/22 22:08:22 by oleg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//todo make null checking in 60 line
#include <stdlib.h>
#include <stdio.h>

static int	is_sep(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

static char	*strsub(char const *s, int len)
{
	char	*res;
	int		i;

	res = malloc((len + 1) * sizeof(char));
	i = 0;
	while (i < len)
	{
		res[i] = s[i];
		i++;
	}
	res[i] = 0;
	return (res);
}

static void	to_zero(int *start, int *idx, int *i)
{
	*start = 0;
	*idx = 0;
	*i = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		n;
	int		idx;
	int		start;
	int		i;

	i = 0;
	n = 1;
	while (s[i++])
		if (is_sep(s[i], c))
			n++;
	res = malloc((n + 1) * sizeof(char *));
	to_zero(&start, &idx, &i);
	while (s[i++])
	{
		if (!is_sep(s[i], c) && i > 0 && is_sep(s[i - 1], c))
			start = i;
		if (is_sep(s[i], c) && i > 0 && !is_sep(s[i - 1], c))
			res[idx++] = strsub(s + start, i - start);
		else if (!s[i + 1] && !is_sep(s[i], c))
			res[idx++] = strsub(s + start, i - start + 1);
	}
	res[idx] = 0;
	return (res);
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