/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:29:00 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/16 11:30:41 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isalpha(char *str)
{
	if ((*str >= 'a' && *str <= 'z')
			|| (*str >= 'A' && *str <= 'Z'))
		return (1);
	else
		return (0);
}

static int	ft_isdigit(char *str)
{
		if (*str >= '0' && *str <= '9')
			return (1);
		else
			return (0) ;
}

int	ft_isalnum(char *str)
{
	if ((ft_isalpha(str))
			|| (ft_isdigit(str)))
		return (1);
	else
		return (0);
}
