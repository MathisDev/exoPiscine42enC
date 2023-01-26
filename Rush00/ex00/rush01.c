/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <mamottet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 09:58:17 by mamottet          #+#    #+#             */
/*   Updated: 2023/01/22 11:06:36 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	step1(int a)
{
	int	i;

	i = 0;
	while (i < a)
	{
		i ++;
		if (i == 1)
		{
			ft_putchar('/');
		}
		else if (i == a)
		{
			ft_putchar('\\');
		}
		else
		{
			ft_putchar('*');
		}
	}
	ft_putchar('\n');
}

void	step2(int a)
{
	int	i;

	i = 0;
	while (i < a)
	{
		i ++;
		if (i == 1)
		{
			ft_putchar('*');
		}
		else if (i == a)
		{
			ft_putchar('*');
		}
		else
		{
			ft_putchar(' ');
		}
	}
	ft_putchar('\n');
}

void	step3(int a)
{
	int	i;

	i = 0;
	while (i < a)
	{
		i ++;
		if (i == 1)
		{
			ft_putchar('\\');
		}
		else if (i == a)
		{
			ft_putchar('/');
		}
		else
		{
			ft_putchar('*');
		}		
	}
	ft_putchar('\n');
}

void	rush(int a, int b)
{
	int	i;

	i = 0;
	if (a != 0 && b != 0)
	{
		step1(a);
	
		if (b > 2)
		{
			while (i < b -2)
			{
				i ++;
				step2(a);
			}
		}
		if (b > 1)
		{
			step3(a);
		}
	}
}
