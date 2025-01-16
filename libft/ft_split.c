/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <evrodrig@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:27:48 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/15 12:43:05 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static size_t	ft_numstring(const char *s, char c)
{
	size_t	count;
	size_t	flag;

	count = 0;
	flag = 0;
	if (!s)
		return (0);
	while (*s != '\0')
	{
		if (*s == c)
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static size_t	ft_numchar(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (s[count] != c && s[count] != '\0')
		count++;
	return (count);
}

static char	**ft_free_matrix(char **matrix, size_t len_matrix)
{
	while (len_matrix--)
		free(matrix[len_matrix]);
	free(matrix);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**matrix;
	size_t	num_strings;
	size_t	i;
	size_t	word_len;

	num_strings = ft_numstring(s, c);
	matrix = (char **)malloc(sizeof(char *) * (num_strings + 1));
	if (!matrix)
		return (NULL);
	i = 0;
	while (i < num_strings)
	{
		while (*s == c)
			s++;
		word_len = ft_numchar(s, c);
		matrix[i] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!matrix[i])
			return (ft_free_matrix(matrix, i));
		ft_strlcpy(matrix[i], s, word_len + 1);
		s += word_len;
		i++;
	}
	matrix[i] = NULL;
	return (matrix);
}
/*
void print_split_result(char **result)
{
    if (result)
    {
        int i = 0;
        while (result[i] != NULL)
        {
            printf("Word %d: %s\n", i + 1, result[i]);
            i++;
        }
    }
    else
    {
        printf("Error: Memory allocation failed.\n");
    }
}

int main()
{
    const char *str = "This is a test string for ft_split!";
    char delimiter = ' ';
    char **result = ft_split(str, delimiter);

    print_split_result(result);

    // Liberar memoria
    if (result)
    {
        int i = 0;
        while (result[i] != NULL)
        {
            free(result[i]);
            i++;
        }
        free(result);
    }

    return 0;
}
*/
