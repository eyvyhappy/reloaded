/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:25:22 by evrodrig          #+#    #+#             */
/*   Updated: 2024/12/23 10:47:54 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	x;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (nb);
	x = 1;
	while (x * x <= nb)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}
/*
int	main(void)
{
	int	ft_sqrt(int nb);
	int	num;
	
	num = 16;
	int	result = ft_sqrt(num);

	char	c;

	if (result == 0)
		write (1, "No tiene raiz cuadrada exacta\n", 30);
	else
	{
		c = result + '0';
		write (1, &c, 1);
		write (1, "\n", 1);
	}
	return(0);
}
*/
