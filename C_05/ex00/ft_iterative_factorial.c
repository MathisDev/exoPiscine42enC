/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 09:25:47 by mamottet          #+#    #+#             */
/*   Updated: 2023/01/26 09:50:20 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = 0;
	f = 1;

	if (nb != i)
	{
		f = f * i;
		i ++;
		return (ft_iterative_factorial(nb));
	}
	else
	{
		return f;
	}
}

int	main(void)
{
	int	i;

	i = 5;
	printf("Le factoriel de %d est %d",i,ft_iterative_factorial(i));
}
