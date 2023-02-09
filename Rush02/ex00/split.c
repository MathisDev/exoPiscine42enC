/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:39:46 by arazzok           #+#    #+#             */
/*   Updated: 2023/02/04 19:21:59 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int	test(char c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z')
		|| ('0' <= c && c <= '9'))
		return (1);
	return (0);
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (test(str[i]))
		i++;
	return (i);
}

char	**put_in_tab(char **tab, int *j, int *c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		*j = 0;
		if ((test(str[i + *j])) && (str[i - 1] == ' '
				|| str [i - 1] == ':' || str [i - 1] == '\n' || i == 0))
		{
			*c += 1;
			tab[*c] = (char *) malloc((ft_len(str + i) + 1) * sizeof(char));
			if (!tab[*c])
				return (NULL);
		}
		while ((test(str[i + *j])))
		{
			tab[*c][*j] = str[i + *j];
			*j += 1;
		}
		i += *j;
		i++;
	}
	return (tab);
}

char	**split(char *str)
{
	char	**tab;
	int		j;
	int		c;

	c = -1;
	tab = (char **) malloc((count_words(str) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	put_in_tab(tab, &j, &c, str);
	tab[c + 1] = 0;
	return (tab);
}
