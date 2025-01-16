/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 13:30:52 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/15 12:37:32 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (dst == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d += len;
		s += len;
		while (len--)
			*--d = *--s;
	}
	return (dst);
}
/*
int	main(void)
{
	char	src1[50] = "This is a test string.";
	char	dst1[50];
	char	src2[50] = "Overlap test for memmove.";

	printf("Before memmove:\n");
	printf("dst1 = \"%s\"\n", dst1);
	printf("src1 = \"%s\"\n", src1);
	ft_memmove(dst1, src1, 10);
	printf("After memmove (no overlap):\n");
	printf("dst1 = \"%s\"\n", dst1);
	printf("\nBefore memmove with overlap:\n");
	printf("src2 = \"%s\"\n", src2);
	ft_memmove(src2 + 7, src2, 20);
	printf("After memmove (with overlap):\n");
	printf("src2 = \"%s\"\n", src2);
	return (0);
}
*/
