/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:53:19 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/09 13:01:56 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <strings.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void		*ptr;
	size_t		total_size;

	total_size = nmemb * size;
	if (total_size == 0)
		return (malloc(0));
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	bzero(ptr, total_size);
	return (ptr);
}
/*
int	main(void)
{
	size_t	count = 5;
	size_t	size = sizeof(int);
	int		*arr;
	size_t	i0;
	size_t	i1;
	size_t	i2;
	
	arr = (int *)calloc(count, size);
	if (arr == NULL)
	{
		printf("Error al asignar memoria\n");
		return (1);
	}
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
        i0 = 0;
        i1 = 1;
        i2 = 2;
        printf("arr[%zu] = %d\n", i0, arr[i0]);
        printf("arr[%zu] = %d\n", i1, arr[i1]);
        printf("arr[%zu] = %d\n", i2, arr[i2]);
        free(arr);
        return (0);
}
*/
