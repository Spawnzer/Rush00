/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adubeau <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 08:58:37 by adubeau           #+#    #+#             */
/*   Updated: 2021/02/13 14:38:21 by adubeau          ###   ########.fr       */
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
			if ((i == 1 && j == 1) || (i == 1 && j == x))
				ft_putchar(65);
			else if ((j == x && i == y) || (j == 1 && i == y))
				ft_putchar(67);
			else if (i == 1 || i == y || j == 1 || j == x)
				ft_putchar(66);
			else
				ft_putchar(32);
		}
		write(1, "\n", 1);
	}
}
