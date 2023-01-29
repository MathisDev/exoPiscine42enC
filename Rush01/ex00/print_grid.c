/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 12:10:42 by arazzok           #+#    #+#             */
/*   Updated: 2023/01/28 14:51:25 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_grid(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (j != 0 && j % 4 == 0)
		{
			ft_putchar('\n');
			j = 0;
		}
		else
		{
			ft_putchar(str[i]);
			if ((j + 1) % 4 != 0)
				ft_putchar(' ');
			j++;
		}
		i++;
	}
}
