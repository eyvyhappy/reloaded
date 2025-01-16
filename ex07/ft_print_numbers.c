/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 16:28:05 by evrodrig          #+#    #+#             */
/*   Updated: 2024/12/21 11:02:17 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	number;

	number = 48;
	while (number >= 48 && number <= 57)
	{
		ft_putchar(number);
		number++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
