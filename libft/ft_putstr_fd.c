/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <evrodrig@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 17:51:34 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/15 12:45:37 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
/*
int	main(void)
{
    // Prueba 1: Imprimir en la salida estándar (fd = 1)
    ft_putstr_fd("Prueba 1: Esto debería aparecer en la terminal.\n", 1);

    // Prueba 2: Imprimir en la salida de error estándar (fd = 2)
    ft_putstr_fd("Prueba 2: Esto debería aparecer como error.\n", 2);

    // Prueba 3: Imprimir en un archivo
    int fd = open("output_test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        ft_putstr_fd("Error al abrir el archivo.\n", 2);
        return 1;
    }
    ft_putstr_fd("Prueba 3: Esto debería estar en un archivo.\n", fd);
    close(fd);

    // Prueba 4: Cadena nula
    ft_putstr_fd(NULL, 1);

    return (0);
}
*/
