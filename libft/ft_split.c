/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleg <oleg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 13:47:21 by oleg              #+#    #+#             */
/*   Updated: 2023/10/22 13:58:55 by oleg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	isSep(char c, char charset)
{
	if (c == charset)
		return (1);
	return (0);
}

char *strsub(char const *s, int len)
{
	char *res = malloc((len + 1) * sizeof(char));
	int i = 0;
	for (; i < len; i++)
		res[i] = s[i];
	res[i] = 0;
	return res;
}

char **ft_split(char const *s, char c)
{
	char **res;
	int n;
	int idx;
	int start;

	n = 1;
	int i = 0;
	while (s[i++])
		if (isSep(s[i], c))	
			n++;
	res = malloc((n + 1) * sizeof(char *));
	start = 0;
	idx = 0;
	i = 0;
	while (s[i++])
	{
		if (!isSep(s[i], c) && i > 0 && isSep(s[i - 1], c))
			start = i;
		if (isSep(s[i], c) && i > 0 && !isSep(s[i - 1], c))
			res[idx++] = strsub(s + start, i - start);
		else if (!s[i + 1] && !isSep(s[i], c))
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