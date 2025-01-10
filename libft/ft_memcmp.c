/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:26:07 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/07 15:10:39 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	int		result1;
	int		result2;

	str1 = "Hello";
	str2 = "Hello";
	str3 = "Pomelo";
	result1 = ft_memcmp(str1, str2, 5);
	if (result1 == 0)
	{
		printf("str1 y str2 son iguales.\n");
	}
	else
	{
		printf("str1 y str2 son diferentes.\n");
	}
	result2 = ft_memcmp(str1, str3, 5);
	if (result2 == 0)
	{
		printf("str1 y str3 son iguales.\n");
	}
	else
	{
		printf("str1 y str3 son diferentes.\n");
	}
	return (0);
}
*/
