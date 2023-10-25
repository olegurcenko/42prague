/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oyurchen <oyurchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:49:04 by oyurchen          #+#    #+#             */
/*   Updated: 2023/10/24 15:52:43 by oyurchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <fcntl.h> 

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
//int main() {
//    int fd = open("output.txt", O_WRONLY | O_CREAT | O_TRUNC, 0666);   
//    if (fd != -1) {
//        ft_putchar_fd('A', fd);
//        close(fd);
//    }
//    return 0;
//}
