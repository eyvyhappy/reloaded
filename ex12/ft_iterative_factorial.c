/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 13:16:04 by evrodrig          #+#    #+#             */
/*   Updated: 2024/12/21 13:41:52 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	result = nb;
	nb--;
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

int	main(void)
{
	int	num;
	int	result;
	int	c;
	
	num = 4;
	result = ft_iterative_factorial(num);
	
	printf("%d\n", result);
}
