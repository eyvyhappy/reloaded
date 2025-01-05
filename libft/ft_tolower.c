/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:49:03 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/03 12:57:27 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 'a' - 'A');
	}
	return (c);
}
/*
int	main(void)
{
	char	c1;
	char	c2;

	c1 = 'A';
	c2 = '1';
	printf("ft_tolower('%c') = '%c'\n", c1, ft_tolower(c1));
	printf("ft_tolower('%c') = '%c'\n", c2, ft_tolower(c2));
}
*/
