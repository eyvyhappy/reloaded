/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 14:31:49 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/07 14:44:24 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *arr, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			i;

	i = 0;
	str = (unsigned char *)arr;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	arr[] = "Genial Idea";
	char	*result;

	result = ft_memchr(arr, 's', 11);
	if (result)
		printf("Encontrado: %c\n", *result);
	else
		printf("No encontrado\n");

	return (0);
}
*/
