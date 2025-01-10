/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:14:00 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/09 12:14:56 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		||nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
	{
		i++;
	}
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
	{
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		if (result > (INT_MAX - (nptr[i] - '0')) / 10)
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	const char	*nptr1;
	const char	*nptr2;
	const char	*nptr3;
	const char	*nptr4;

	nptr1 = "   -1234";
	nptr2 = " +5678";
	nptr3 = "       42abc";
	nptr4 = " abc123";
	printf("ft_atoi('%s') = %d\n", nptr1, ft_atoi(nptr1));
	printf("ft_atoi('%s') = %d\n", nptr2, ft_atoi(nptr2));
	printf("ft_atoi('%s') = %d\n", nptr3, ft_atoi(nptr3));
	printf("ft_atoi('%s') = %d\n", nptr4, ft_atoi(nptr4));
	return (0);
}
*/
