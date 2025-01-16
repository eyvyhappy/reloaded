/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:47:38 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/16 08:24:21 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	str_len;
	size_t	i;

	if (s == NULL)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		len = 0;
	else if (start + len > str_len)
		len = str_len - start;
	substring = (char *)malloc(len + 1);
	if (substring == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[start + i] != '\0')
	{
		substring[i] = s[start + i];
		i++;
	}
	substring[i] = '\0';
	return (substring);
}
/*
int	main(void)
{
	char	*result;

	result = ft_substr("Hello, world!", 7, 5);
	printf("'%s'\n", result);
	free(result);
	result = ft_substr("Hello, world!", 13, 5);
	printf("'%s'\n", result);
	free(result);
	result = ft_substr("Hello, world!", 0, 20);
	printf("'%s'\n", result);
	free(result);
	result = ft_substr(NULL, 0, 5);
	result = ft_substr(NULL, 0, 5);
	if (result != NULL)
	{
		printf("'%s'\n", result);
	}
	else
	{
		printf("(null)\n");
	}
	return (0);
}
*/
