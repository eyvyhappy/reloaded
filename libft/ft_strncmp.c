/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 11:47:10 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/04 14:53:48 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return ((unsigned char)*s1 -(unsigned char)*s2);
		}
		s1++;
		s2++;
		n--;
	}
	if (n > 0)
	{
		return ((unsigned char)(*s1) -(unsigned char)(*s2));
	}
	return (0);
}
/*
int	main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;

	str1 = "Hello";
	str1 = "Hello";
	str1 = "HelLo";
	str1 = "Hello World";
	printf("Com '%s' y '%s': %d\n", str1, str2, ft_strncmp(str1, str2, 5));
	printf("Com '%s' y '%s': %d\n", str1, str3, ft_strncmp(str1, str3, 5));
	printf("Com '%s' y '%s': %d\n", str1, str4, ft_strncmp(str1, str4, 5));
	printf("Com '%s' y '%s': %d\n", str1, str2, ft_strncmp(str1, str2, 3));
	return (0);
}
*/
