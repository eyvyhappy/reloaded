/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 10:35:00 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/09 10:40:24 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	copy = (char *)malloc((len + 1) * sizeof (char));
	if (copy == NULL)
	{
		return (NULL);
	}
	while (i < len)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int	main(void)
{
	char	*orig = "Hola, mundo!";
	char 	*copia = ft_strdup(orig);

	if(copia != NULL)
	{
		printf("Orig: %s\n", orig);
		printf("copia: %s\n", copia);
		free(copia);
	}
	else
	{
		printf("Error: No se pudo reservar memoria. \n");
	}
	return (0);
}
*/
