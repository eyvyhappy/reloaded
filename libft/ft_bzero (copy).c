/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 11:26:48 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/09 10:23:46 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	str = s;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

/*
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}

int	main(void)
{
	char	str[10] = "Super";

	printf ("Before ft_bzero: %s\n", str);
	ft_bzero (str, 5);
	printf ("After ft_bzero: %s\n", str);
	return (0);
}
*/
