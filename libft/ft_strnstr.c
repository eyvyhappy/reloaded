/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 10:05:53 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/07 13:25:38 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <stddef.h>
#include <string.h>

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	if (!*find)
		return ((char *)str);
	i = ft_strlen(find);
	j = 0;
	while (j < len)
	{
		if (str[j] == find[0])
		{
			if (ft_strncmp(&str[j], find, i) == 0 && j + i <= len)
				return ((char *)(&str[j]));
		}
		if (!str[j])
			return (NULL);
		j++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*str;
	const char	*find;
	char	*result;

	str = "Es dificil";
	find = "Es";
	result = ft_strnstr(str, find, 9);
	if (result)
		printf("Subcadena encontrada: %s\n", result);
	else
	{
		printf("Subcadena no encontrada\n");
	}
		return (0);
}
*/
