/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 14:05:21 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/15 12:36:23 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *s, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = s;
	while (len--)
	{
		*ptr = (unsigned char)c;
		ptr++;
	}
	return (s);
}
/*
int	main(void)
{
	char	arr[5];
	size_t	len;
	int		c;
	size_t	i;

	len = 5;
	c = 65;
	ft_memset(arr, c, len);
	i = 0;
	while (i < len)
	{
		printf("%c", arr[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
