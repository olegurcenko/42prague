/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:16:35 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/24 22:57:09 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int s)
{
	int		i;
	char	*res;

	i = 0;
	res = 0;
	while (str[i])
	{
		if (str[i] == s)
			res = ((char *)(str + i));
		i++;
	}
	if (str[i] == s)
		res = (char *)(str + i);
	return (res);
}

//char	*ft_strrchr(const char *s, int c)
//{
//	int		i;
//	char	*ptr;

//	i = 0;
//	ptr = 0;
//	while (s[i])
//	{
//		if (s[i] == c)
//			ptr = (char *)(s + i);
//		i++;
//	}
//	if (s[i] == c)
//		ptr = (char *)(s + i);
//	return (ptr);
//}

//int main()
//{
//    const char *testString = "Hello, World!";
//    int characterToFind = 'o';

//    // Using your implementation
//    char *yourResult = ft_strrchr(testString, characterToFind);

//    // Using the standard library function for comparison
//    char *stdResult = strrchr(testString, characterToFind);

//    // Output the results
//    printf("Your result: %s\n", yourResult);
//    printf("Standard result: %s\n", stdResult);

//    // Compare the results
//    if (yourResult == stdResult)
//    {
//        printf("Results match!\n");
//    }
//    else
//    {
//        printf("Results do not match!\n");
//    }

//    return 0;
//}