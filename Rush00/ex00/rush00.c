/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hpineran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:41:25 by hpineran          #+#    #+#             */
/*   Updated: 2023/01/21 14:41:27 by hpineran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	display_first_line(int x)
{
	int	pos;

	pos = 2;
	ft_putchar('o');
	while (pos < x)
	{
		ft_putchar('-');
		pos++;
	}
	if (x != 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	display_mid_lines(int x)
{
	int	pos;

	pos = 2;
	ft_putchar('|');
	while (pos < x)
	{
		ft_putchar(' ');
		pos++;
	}
	if (x != 1)
		ft_putchar('|');
	ft_putchar('\n');
}

void	display_last_line(int x)
{
	int	pos;

	pos = 2;
	ft_putchar('o');
	while (pos < x)
	{
		ft_putchar('-');
		pos++;
	}
	if (x != 1)
		ft_putchar('o');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line_number;

	if (x > 0 && y > 0)
	{		
		line_number = 2;
		display_first_line(x);
		while (line_number < y)
		{
			display_mid_lines(x);
			line_number++;
		}
		if (y != 1)
			display_last_line(x);
	}
}
