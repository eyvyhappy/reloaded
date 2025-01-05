/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:50:58 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/03 11:23:17 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}
/*
int	main(void)
{
	char	c1;
	char	c2;

	c1 = 'A';
	c2 = '@';
	printf("ft_isalnum('%c') = %d\n", c1, ft_isalnum(c1));
	printf("ft_isalnum('%c') = %d\n", c2, ft_isalnum(c2));
	return (0);
}
*/
