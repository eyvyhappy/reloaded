/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 10:35:31 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/04 11:45:23 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*last = NULL;

	while (*s)
	{
		if (*s == (char)c)
		{
			last = s;
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)(s));
	}
	return ((char *)(last));
}
/*
int	main(void)
{
	const char	*str;
	char		*result;
	
	str = "Esto es genial";
	result = ft_strrchr(str, 'e');
	if (result != NULL)
	{
		printf("ultima de 'e' posicion: %ld\n", result - str);
	}
	else
	{
		printf("El caracter no se encontro.\n");
	}
	 result = ft_strrchr(str, 'z');
        if (result != NULL)
        {
                printf("ultima de 'z' posicion: %ld\n", result - str);
        }
        else
        {
              printf("El caracter no se encontro.\n");
        }
	return (0);



}
*/
