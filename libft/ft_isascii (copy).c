/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:28:28 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/03 11:37:37 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main(void)
{
	int	c1;
	int	c2;

	c1 = 'A';
	c2 = 128;
	printf("ft_isascii('%c') = %d\n", c1, ft_isascii(c1));
	printf("ft_isascii('%d') = %d\n", c2, ft_isascii(c2));
	return (0);
}
*/
