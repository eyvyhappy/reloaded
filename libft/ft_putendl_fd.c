/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <evrodrig@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 18:04:16 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/15 13:29:32 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

static void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

void	ft_putendl_fd(char *s, int fd)
{
	if (s == NULL || fd < 0)
		return ;
	if (fd < 0)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}
/*
int	main(void)
{
    // Prueba 1: Escribir en la salida estándar (fd = 1)
    ft_putendl_fd("Prueba 1: Esto debería aparecer en la terminal.", 1);

    // Prueba 2: Escribir en la salida de error estándar (fd = 2)
    ft_putendl_fd("Prueba 2: Esto debería aparecer como error.", 2);

    // Prueba 3: Escribir en un archivo
    int fd = open("output_test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
    if (fd == -1)
    {
        write(2, "Error al abrir el archivo.\n", 26); 
        return 1;
    }
    ft_putendl_fd("Prueba 3: Esto debería estar en un archivo.", fd);
    close(fd);

    // Prueba 4: Manejo de cadenas nulas
    ft_putendl_fd(NULL, 1); // No debería imprimir nada ni causar errores

    // Prueba 5: Escribir en un file descriptor inválido
    ft_putendl_fd("Prueba 5: Esto no debería imprimirse (fd inválido).", -1);
    return 0;
}
*/
