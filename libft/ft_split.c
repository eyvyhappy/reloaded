/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <evrodrig@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:27:48 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/13 19:34:01 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	word_len(const char *s, char c)
{
	int	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static char	*create_word(const char *s, int len)
{
	char    *word;
	int             i;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
		word[i++] = *s++;
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
        int		i;
        int		j;

	res = malloc(sizeof(char *) * 1024);
	if (!s || !(res))
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
		if (s[i] == c)
			i++;
                else
                {
                        res[j] = create_word(s + i, word_len(s + i, c));
                        if (!(res[j]))
                                return (free(res), NULL);
			else
			{
                                i += word_len(s + i, c);
                                j++;
                        }
                }
        return (res[j] = NULL, res);
}

static void print_split_result(char **split)
{
        int i;

        if (!split)
        {
                printf("NULL result\n");
                return;
        }
        i = 0;
        while (split[i])
        {
                printf("[%s]\n", split[i]);
                i++;
        }
}



static void free_result(char **split)
{
        int i;

        if (!split)
                return;
        i = 0;
        while (split[i])
        {
                free(split[i]);
                i++;
        }
        free_result(split);
}
/*
int main(void)
{
        char **result;

        printf("Test 1: Normal string with spaces\n");
        result = ft_split("Hello World Test", ' ');
        print_split_result(result);
        free_result(result);

        printf("\nTest 2: String with multiple delimiters\n");
        result = ft_split("...hello...world...", '.');
        print_split_result(result);
        free_result(result);

        printf("\nTest 3: Empty string\n");
        result = ft_split("", ' ');
        print_split_result(result);
        free_result(result);

        printf("\nTest 4: String with no delimiter\n");
        result = ft_split("HelloWorld", ' ');
        print_split_result(result);
        free_result(result);

        printf("\nTest 5: NULL input\n");
        result = ft_split(NULL, ' ');
        print_split_result(result);
        free_result(result);

        return (0);
}
*/
