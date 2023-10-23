/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:10:16 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/23 17:15:24 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int s)
{
	if (!str || !s)
		return (NULL);
	while (*str != '\0')
	{
		if (*str == s)
			return ((char *)str);
		str ++;
	}
	if (s == '\0')
		return ((char *)str);
	return (NULL);
}