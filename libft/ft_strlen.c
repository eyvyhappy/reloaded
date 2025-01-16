/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 12:59:12 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/15 14:08:33 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
/*
int	main(void)
{
	const char	*str1;
	const char	*str2;

	str1 = "Always happy";
	str2 = "I Love people";
	printf("Lenght of str1: %zu\n", ft_strlen(str1));
	printf("Lenght of str2: %zu\n", ft_strlen(str2));
	return (0);
}
*/
