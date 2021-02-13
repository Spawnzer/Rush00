/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddutton <marvin@42quebec.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:53:06 by ddutton           #+#    #+#             */
/*   Updated: 2021/02/13 14:00:55 by ddutton          ###   ########.fr       */
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
			else if (j == 1 && i == y)
				ft_putchar(67);
			else if (j == x && i == y)
				ft_putchar(65);
			else if (j == 1 || j == x || i == 1 || i == y)
				ft_putchar(66);
			else
				ft_putchar(32);
		}
		write(1, "\n", 1);
	}
}
