/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 13:12:48 by evrodrig          #+#    #+#             */
/*   Updated: 2024/12/23 11:32:52 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*


int	main(void)
{
	char	*str;

	str = "Hola";
	int	longitud = ft_strlen(str);
	printf ("La longitud de la cadena es: %d\n", longitud);
	return (0);
}
*/
