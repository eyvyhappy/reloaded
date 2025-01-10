/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:59:12 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/10 12:21:21 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char		dest[5];
	const char	src[50] = "lavidaloca";
	size_t		n;
	char		*ret;

	n = 7;
	ret = (char *)ft_memcpy(dest, src, n);
	printf("Destination: \"%s\"\n", ret);
	return (0);
}
*/
