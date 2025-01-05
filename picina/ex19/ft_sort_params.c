/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evrodrig <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 18:26:21 by evrodrig          #+#    #+#             */
/*   Updated: 2024/12/23 13:31:04 by evrodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_putstrln(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_swapstr(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(int ac, char **argv)
{
	int	i;
	int	flag;

	flag = 0;
	while (!flag)
	{
		flag = 1;
		i = 1;
		while (i + 1 < ac)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				ft_swapstr(&argv[i], &argv[i + 1]);
				flag = 0;
			}
			i++;
		}
	}
	i = 1;
	while (argv[i])
		ft_putstrln(argv[i++]);
	return (0);
}*/
