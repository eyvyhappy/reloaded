/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 10:32:11 by evrodrig          #+#    #+#             */
/*   Updated: 2024/12/21 11:08:00 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temporal;

	temporal = *a;
	*a = *b;
	*b = temporal;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 10;
	ft_swap(&x, &y);
	write(1, "intercambio:\n", 13);
	write(1, "x:5-> 10\n", 12);
	write(1, "y:10-> 5\n", 12);
	return (0);
}
*/
