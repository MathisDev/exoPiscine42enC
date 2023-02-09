/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   writing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 19:04:45 by arazzok           #+#    #+#             */
/*   Updated: 2023/02/04 19:05:13 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

char	*units(int len, int *i, char arg, struct s_stock_str *par)
{
	char	*t;
	int		j;
	char	*res;

	res = (char *) malloc(500 * sizeof(char));
	t = (char *) malloc(20 * sizeof(char));
	j = 0;
	if ((len - *i) % 3 == 1)
	{
		if (*i != len - 1)
		{
			res = normi2(ft_cat(arg, '\0'), res, par);
			res = ft_strcat(res, " ");
			t = trans('1', (len - *i - 1));
			while (ft_strncmp(t, par[j].key, len - *i) && par[j + 1].key != 0)
				j++;
			res = ft_strcat(res, par[j].value);
			return (res);
		}
		while (ft_strncmp(&arg, par[j].key, len - *i))
			j++;
		res = ft_strcat(res, par[j].value);
	}
	return (res);
}

char	*hundred(int len, int *i, char arg, struct s_stock_str *par)
{
	char	*test;
	int		j;
	char	*res;

	res = (char *) malloc(500 * sizeof(char));
	test = (char *) malloc(20 * sizeof(char));
	j = 0;
	if ((len - *i) % 3 == 0)
	{
		while (ft_strncmp(ft_cat(arg, '\0'), par[j].key, len - *i))
			j++;
		res = ft_strcat(res, par[j].value);
		j = 0;
		res = ft_strcat(res, " ");
		test = trans('1', 2);
		while (ft_strncmp(test, par[j].key, 4))
		{
			j++;
		}
		res = ft_strcat(res, par[j].value);
	}
	return (res);
}

char	*tenth(int len, int *i, char *arg, struct s_stock_str *par)
{
	char	*t;
	int		j;
	char	*res;

	res = (char *) malloc(500 * sizeof(char));
	t = (char *) malloc(20 * sizeof(char));
	j = 0;
	if ((len - *i) % 3 == 2)
	{
		if (arg[*i] != '1')
			res = normi(t, arg[*i], res, par);
		else
		{
			res = normi2(ft_cat(arg[*i], arg[*i + 1]), res, par);
			t = trans('1', (len - *i - 2));
			while (ft_strncmp(t, par[j].key, len - *i) && par[j + 1].key != 0)
				j++;
			if (ft_strlen(t) != 1)
				res = ft_strcat(res, ft_strcat(" ", par[j].value));
			*i += 1;
		}
	}
	return (res);
}

char	*zero(int len, int i, char arg, struct s_stock_str *par)
{
	char	*test;
	int		j;
	char	*res;

	res = (char *) malloc(500 * sizeof(char));
	test = (char *) malloc(20 * sizeof(char));
	j = 0;
	if ((len - i) % 3 == 1 && i != len - 1 && arg == '0')
	{
		test = trans('1', (len - i - 1));
		while (ft_strncmp(test, par[j].key, len - i))
			j++;
		res = ft_strcat(res, par[j].value);
	}
	else if ((len - i) % 3 == 1 && len == 1)
	{
		while (ft_strncmp(&arg, par[j].key, 1))
			j++;
		res = ft_strcat(res, par[j].value);
	}
	return (res);
}

char	*writing(char *arg, struct s_stock_str *par)
{
	int		i;
	int		len;
	char	*res;

	res = (char *) malloc(500 * sizeof(char));
	len = ft_nblen(arg);
	i = 0;
	while (arg[i])
	{
		if (arg[i] != '0')
		{
			res = ft_strcat(res, units(len, &i, arg[i], par));
			res = ft_strcat(res, tenth(len, &i, arg, par));
			res = ft_strcat(res, hundred(len, &i, arg[i], par));
			if (i != len - 1 && arg[i + 1] != '0')
				res = ft_strcat(res, " ");
		}
		res = ft_strcat(res, zero(len, i, arg[i], par));
		if (i != len - 1 && arg[i + 1] != '0' && arg[i] == '0')
			res = ft_strcat(res, " ");
		i++;
	}
	return (res);
}
