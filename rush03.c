/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:57:37 by olabrecq          #+#    #+#             */
/*   Updated: 2021/02/13 14:35:35 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i++ < y)
	{
		j = 0;
		while (j++ < x)
		{
			if (j == 1 && i == 1)
				ft_putchar(65);
			else if (j == x && i == 1)
				ft_putchar(67);
			else if (i == y && j == 1)
				ft_putchar(65);
			else if (i == y && j == x)
				ft_putchar(67);
			else if (i == 1 || i == y || j == 1 || j == x)
				ft_putchar(66);
			else
				ft_putchar(32);
		}
		write(1, "\n", 1);
	}
}
