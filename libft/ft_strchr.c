/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 08:49:29 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/14 11:20:10 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	target;

	target = (unsigned char)c;
	while (*s)
	{
		if ((unsigned char)*s == target)
			return ((char *)s);
		s++;
	}
	if (target == '\0')
		return ((char *)s);
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
		printf("Caracter '%c' en la posicion: %td\n", *result, result - str);
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
