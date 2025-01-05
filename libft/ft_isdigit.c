/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 10:13:31 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/03 10:33:57 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
int	main(void)
{
	char	c;

	c = '5';
	if (ft_isdigit(c))
	{
		printf("El caracter '%c' es un digito.\n", c);
	}
	else
	{
		printf("El caracter '%c' no es un digito.\n", c);
	}
}
*/
