/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 08:49:29 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/04 14:33:01 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	return (NULL);
}
/*
int	main(void)
{
	char	*str;

	str = "Esto es genial";

	char	*result;
	
	result	= ft_strchr(str, 'e');
	if (result != NULL)
	{
		printf("Caracter '%s' en la posicion: %td\n", result, result - str);
	}
	else
	{
		printf("El caracter no fue encontrado.\n");
	}

	result = ft_strchr(str, 'z');
	 if (result != NULL)
        {
                printf("Caracter '%c' posicion: %td\n", *result, result - str);
        }
        else
        {
                printf("El caracter no fue encontrado.\n");
        }


}
*/
