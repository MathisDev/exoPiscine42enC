/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norminette.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: awalter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 07:50:14 by awalter           #+#    #+#             */
/*   Updated: 2023/02/05 07:50:16 by awalter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

char	*normi(char *test, char arg, char *res, struct s_stock_str *par)
{
	int	j;

	j = 0;
	test = trans(arg, 1);
	while (ft_strncmp(test, par[j].key, 4) && par[j + 1].key != 0)
		j++;
	res = ft_strcat(res, par[j].value);
	return (res);
}

char	*normi2(char *test, char *res, struct s_stock_str *par)
{
	int	j;

	j = 0;
	while (ft_strncmp(test, par[j].key, 4) && par[j + 1].key != 0)
		j++;
	res = ft_strcat(res, par[j].value);
	return (res);
}
