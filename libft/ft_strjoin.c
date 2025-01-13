/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 13:04:48 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/13 19:05:53 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	len1;
	size_t	len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	joined_str = (char *)malloc(len1 + len2 + 1);
	if (joined_str == NULL)
		return (NULL);
	ft_memcpy(joined_str, s1, len1);
	ft_memcpy(joined_str + len1, s2, len2 + 1);
	return (joined_str);
}
/*
int	main(void)
{
	char	*result;
	result = ft_strjoin("Hello", "World");
	if (result)
	{
		printf("Test 1: %s\n", result);
		free(result);
	}
	else
	{
		printf("Test 1: Error en la concatenación\n");
	}

    result = ft_strjoin("", "World");
    if (result) {
        printf("Test 2: %s\n", result);
        free(result);
    } else {
        printf("Test 2: Error en la concatenación\n");
    }

    result = ft_strjoin("Hello", "");
    if (result) {
        printf("Test 3: %s\n", result);
        free(result);
    } else {
        printf("Test 3: Error en la concatenación\n");
    }

    result = ft_strjoin("", "");
    if (result) {
        printf("Test 4: %s\n", result);
        free(result);
    } else {
        printf("Test 4: Error en la concatenación\n");
    }

    result = ft_strjoin("Hello", " !@#$%^&*()");
    if (result) {
        printf("Test 5: %s\n", result);
        free(result);
    } else {
        printf("Test 5: Error en la concatenación\n");
    }

    result = ft_strjoin("A very long string ", " and another long one!");
    if (result) {
        printf("Test 6: %s\n", result);
        free(result);
    } else {
        printf("Test 6: Error en la concatenación\n");
    }

    return 0;
}
*/
