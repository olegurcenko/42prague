/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:49:55 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/16 13:49:57 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*buffer;

	buffer = dest;
	while (*buffer != '\0')
		buffer++;
	while (*src != '\0')
	{
		*buffer = *src;
		buffer++;
		src++;
	}
	*buffer = '\0';
	return (dest);
}