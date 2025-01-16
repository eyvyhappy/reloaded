/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <evrodrig@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 11:52:04 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/15 13:13:37 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*trimmed;
	size_t		start;
	size_t		end;
	size_t		i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	trimmed = (char *)malloc(sizeof(char) * (end - start + 1));
	if (trimmed == NULL)
		return (NULL);
	i = 0;
	while (start < end)
		trimmed[i++] = s1[start++];
	trimmed[i] = '\0';
	return (trimmed);
}
/*
int	main(void)
{
	char		*str;
	char		*set;
	char		*trimmed;

	str = "  Hello, World!  ";
	set = " ";
	trimmed = ft_strtrim(str, set);
	if (trimmed == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	printf("Original string: '%s'\n", str);
	printf("Trimmed string: '%s'\n", trimmed);
	free(trimmed);
	return (0);
}
*/
