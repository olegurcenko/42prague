/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:16:35 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/23 17:25:03 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *str, int s)
{
	char *res;

	res = NULL;
	if (!str || !s)
		return (NULL);
	while (*str != '\0')
	{
		if (*str == s)
			res = (char *)str;
		str ++;
	}
	if (s == '\0')
		return ((char *)str);
	return (res);
}
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