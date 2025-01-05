/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 11:38:19 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/03 12:19:46 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int	main(void)
{
	int	c1;
	int	c2;

	c1 = 31;
	c2 = 45;
	printf("ft_isprint('%c') = %d\n", c1, ft_isprint(c1));
	printf("ft_isprint('%c') = %d\n", c2, ft_isprint(c2));
}
*/
