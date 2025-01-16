/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 12:49:06 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/15 12:30:13 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *str);

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[count] != '\0' && count < (size - 1))
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (ft_strlen(src));
}
/*
int	main(void)
{
	char	src[] = "Estoy feliz";
	char	dest[20];
	size_t	size = 12;
	size_t	len = ft_strlcpy(dest, src, size);

	printf("Fuente: %s\n", src);
	printf("Destino (despues de ft_strlcpy): %s\n", dest);
	printf("Longitud de la cadena fuente: %zu\n", len);
	return (0);
}
*/
