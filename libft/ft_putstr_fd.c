/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:53:29 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/24 16:01:26 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <fcntl.h> 
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (*s != '\0')
	{
		ft_putchar_fd(*s, fd);
		s++;
	}
}
//int main() {
//    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);
//    if (fd != -1) {
//        ft_putstr_fd("hello", fd);
//        close(fd);
//    }
//    return 0;
//}
