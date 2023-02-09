/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trans.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:56:33 by arazzok           #+#    #+#             */
/*   Updated: 2023/02/04 19:24:47 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

char	*trans(char tt, int nbo)
{
	int		i;
	char	*str;

	i = 1;
	str = (char *) malloc((nbo + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[0] = tt;
	while (i <= nbo)
	{
		str[i] = '0';
		i++;
	}
	ft_strcat(str, "\0");
	return (str);
}
