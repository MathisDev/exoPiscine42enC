/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <mamottet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 20:24:39 by mamottet          #+#    #+#             */
/*   Updated: 2023/02/08 01:06:02 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*tab;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc((max - min) * sizeof(int));
	if (!tab)
		return (-1);
	while (min < max)
	{
		tab[i] = min;
		min++;
		i ++;
	}
	*range = tab;
	return (i);
}
