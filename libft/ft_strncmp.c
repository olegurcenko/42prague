/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:55:39 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/24 14:29:46 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (*s1 && *s2 && counter < n)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		counter++;
	}
	if (counter == n)
		return (0);
	else
		return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
