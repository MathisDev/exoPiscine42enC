/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:22:28 by arazzok           #+#    #+#             */
/*   Updated: 2023/02/04 19:22:39 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

char	*ft_cat(char dest, char src)
{
	char	*res;

	res = (char *) malloc(3 * sizeof(char));
	res[0] = dest;
	res[1] = src;
	res[2] = '\0';
	return (res);
}
