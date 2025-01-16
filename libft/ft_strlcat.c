/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 11:48:04 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/15 12:38:19 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;
	size_t	i;

	len = 0;
	i = len;
	while (dst[i] && i < dstsize)
		i++;
	len = i;
	while (src[i - len] && i + 1 < dstsize)
	{
		dst[i] = src[i - len];
		i++;
	}
	if (len < dstsize)
		dst[i] = '\0';
	return (len + ft_strlen(src));
}
/*
int	main(void)
{
	char	dst[20] = "Hello, ";
	const char	*src = "World";
	size_t	dstsize = 20;

	printf("Cadena original dst: \"%s\"\n", dst);
	printf("Cadena src: \"%s\"\n", src);
	size_t	result = ft_strlcat(dst, src, dstsize);

	printf("Cadena concatenada dst: \"%s\"\n", dst);
        printf("Long tot de la cadena concatenizada: %zu\n", result);
}
*/
