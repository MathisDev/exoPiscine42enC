/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abriffau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:20:02 by abriffau          #+#    #+#             */
/*   Updated: 2023/01/21 15:22:00 by abriffau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	display_first_line(int x)
{
	int	pos;

	ft_putchar('A');
	pos = 2;
	while (pos < x)
	{
		ft_putchar('B');
		pos++;
	}
	if (x != 1)
		ft_putchar('A');
	ft_putchar('\n');
}

void	display_mid_lines(int x)
{
	int	pos;

	pos = 2;
	ft_putchar('B');
	while (pos < x)
	{
		ft_putchar(' ');
		pos++;
	}
	if (x != 1)
		ft_putchar('B');
	ft_putchar('\n');
}

void	display_last_line(int x)
{
	int	pos;

	pos = 2;
	ft_putchar('C');
	while (pos < x)
	{
		ft_putchar('B');
		pos++;
	}
	if (x != 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line_number;

	if (x > 0 && y > 0)
	{		
		display_first_line(x);
		line_number = 2;
		while (line_number < y)
		{
			display_mid_lines(x);
			line_number++;
		}
		if (y != 1)
			display_last_line(x);
	}
}
