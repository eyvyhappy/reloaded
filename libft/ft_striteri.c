/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <evrodrig@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:57:09 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/13 17:49:12 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

static void	putstr(unsigned int i, char *s)
{
	if (s)
	{
		(void)i;
		if (s[0] >= 'a' && s[0] <= 'z')
		{
			s[0] -= 32;
		}
		write(1, s, 1);
	}
}
/*
int	main(void)
{
	char	str[] = "hello";

	printf("Original string: %s\n", str);
	ft_striteri(str, putstr);
	printf("\nModified string: %s\n", str);
	return (0);
}
*/
