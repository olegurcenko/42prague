/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 22:10:35 by oleg              #+#    #+#             */
/*   Updated: 2023/10/23 16:24:40 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	num_len(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 0)
	{
		n /= 10;
		len ++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		last;
	int		len;
	int		neg;

	neg = 0;
	len = num_len(n);
	if (n < 0)
	{
		n = -n;
		neg = 1;
	}
	res = malloc(sizeof(char) * (num_len(n) + 2));
	if (!res)
		return (NULL);
	res[len] = '\0';
	len --;
	while (n > 0 && len != -1)
	{
		res[len--] = n % 10 + '0';
		n /= 10;
	}
	if (neg == 1)
		res[len] = '-';
	return (res);
}

//int main()
//{
//    char *a = ft_itoa(-123123123);
//    printf("%s\n", a);

//    free(a);

//    return 0;
//}
