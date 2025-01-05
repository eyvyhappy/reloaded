/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:21:49 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/03 12:48:27 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 'a' + 'A');
	}
	return (c);
}
/*
int	main(void)
{
	char	c1;
	char	c2;
	char	c3;

	c1 = 'a';
	c2 = 'B';
	c3 = '1';
	printf("ft_toupper('%c' = '%c'\n", c1, ft_toupper(c1));
	printf("ft_toupper('%c' = '%c'\n", c2, ft_toupper(c2));
	printf("ft_toupper('%c' = '%c'\n", c3, ft_toupper(c3));
}
*/
