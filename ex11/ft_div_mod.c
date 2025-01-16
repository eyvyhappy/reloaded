/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 11:11:45 by evrodrig          #+#    #+#             */
/*   Updated: 2024/12/21 11:09:22 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	result_div;
	int	result_mod;

	x = 18;
	y = 5;
	ft_div_mod(x, y, &result_div, &result_mod);
	printf("Division: %d\n", result_div);
	printf("Modulo: %d\n", result_mod);
	return (0);
}
*/
