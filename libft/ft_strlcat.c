/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:53:29 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/23 16:55:47 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	total_size;

	dest_size = 0;
	while (*dest != '\0')
	{
		dest++;
		dest_size++;
	}
	total_size = dest_size;
	while (*src != '\0')
	{
		if ((int)(size) - (int)(total_size) > 1)
		{
			*dest = *src;
			dest++;
		}
		total_size++;
		src++;
	}
	if (size && size >= dest_size)
		*dest = '\0';
	return (total_size);
}