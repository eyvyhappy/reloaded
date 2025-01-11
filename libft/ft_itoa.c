/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <evrodrig@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 16:27:04 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/11 18:04:48 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		is_negative;

	len = 1;
	if (is_negative)
	{
		n = -n;
		len++;
	}
	while (n >= 10)
	{
		n /= 10;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	while (len >= 0)
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}
/*
int	main(void)
{
	int		numero;
	char	*resultado;

	numero = -12345;
	resultado = ft_itoa(numero);
	if (resultado != NULL)
	{
		printf("El número %d convertido a cadena es: %s\n", numero, resultado);
		free(resultado);
	}
	else
	{
		printf("Error al convertir el número.\n");
	}
	return (0);
}
*/
