/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oleg <oleg@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 21:56:51 by oleg              #+#    #+#             */
/*   Updated: 2023/10/21 22:26:04 by oleg             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	skip(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] == * set)
		i++;
	//printf("%d", i);
	return (i);
}

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i + 1);
}

int	skip_end(char const *s1, char const *set)
{
	int	len;
	int	i;

	i = 0;
	len = ft_strlen(s1) - 2;
	while (s1[len] == *set)
	{
		len --;
		i ++;
	}
	//printf("%d", i);
	return (i);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*result;

	result = malloc(sizeof(char) * (ft_strlen(s1) - skip(s1, set) - skip_end(s1, set)));
	printf("%d", (ft_strlen(s1) - skip(s1, set) - skip_end(s1, set)));
	return result;
}
