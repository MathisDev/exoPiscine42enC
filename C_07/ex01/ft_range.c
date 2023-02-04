/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 19:16:05 by mamottet          #+#    #+#             */
/*   Updated: 2023/02/02 20:24:00 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	range;

	range = max - min;
	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	tab = (int*)malloc(range * sizeof(int));
	while (min != max)
	{
		tab[i] = min;
		i ++;
		min ++;
	}
	return (tab);
}
