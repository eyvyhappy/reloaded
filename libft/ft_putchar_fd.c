/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <evrodrig@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:20:32 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/13 17:50:23 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
/*
int	main(void)
{
	char	*test_str;
	char	*ptr;

	test_str = "Print me!";
	ptr = test_str;
	while (*ptr)
	{
		ft_putchar_fd(*ptr, 1);
		ptr++;
	}
	ft_putchar_fd('\n', 1);
	return (0);
}
*/
