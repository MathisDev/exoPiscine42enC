/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 10:13:17 by awalter           #+#    #+#             */
/*   Updated: 2023/02/05 12:33:12 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	int			j;
	t_stock_str	*tab;

	if (ac < 1)
		ac = 0;
	tab = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab)
		return (0);
	j = 0;
	i = 0;
	while (i < ac)
	{
		tab[j].key = av[i];
		tab[j].value = av[i + 1];
		j++;
		i += 2;
	}
	tab[j].key = 0;
	return (tab);
}

int	is_num(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i ++;
		else
			return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	char	*res;

	if (argc != 2 && argc != 3)
	{
		ft_putstr("Error\n");
		return (1);
	}
	
	if (argc == 2 && is_num(argv[1]) == 0)
	{
		ft_putstr("Error\n");
		return (1);
	}
	else if (argc == 3 && is_num(argv[2]) == 0)
	{
		ft_putstr("Error\n");
		return (1);
	}
	res = (char*) malloc (500 * sizeof(char));
	if (argc)
		res = writing(argv[1], ft_strs_to_tab(count_words(c_str()), split(c_str())));
	ft_putstr(res);
	return (0);
}
