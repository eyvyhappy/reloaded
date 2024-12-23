/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 14:47:28 by evrodrig          #+#    #+#             */
/*   Updated: 2024/12/20 15:36:02 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main()
{
	int	ft_strcmp(char *s1, char *s2);
	char	*str1 = "Holaa";
	char	*str2 = "Hola";
	char	*str3 = "Adios";
	printf("Comparando %s: %s: %d \n", str1, str2, ft_strcmp(str1, str2));
	printf("Comparando %s: %s: %d \n", str1, str2, ft_strcmp(str1, str3));
       	printf("Comparando %s: %s: %d \n", str1, str2, ft_strcmp(str3, str1));

	return (0);
}
*/
