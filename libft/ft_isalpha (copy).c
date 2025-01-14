/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 09:53:03 by evrodrig          #+#    #+#             */
/*   Updated: 2025/01/04 14:42:37 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
int	main(void)
{
	int	x;

	x = 0;
	if (ft_isalpha('3'))
	{
		printf("'a' es una letra.\n");
	}
	else
	{
		printf ("'a' no es una letra.\n");
	}
	return (0);
}
*/
