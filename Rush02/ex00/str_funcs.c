/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_funcs.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:25:26 by arazzok           #+#    #+#             */
/*   Updated: 2023/02/04 18:58:26 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i ++;
	}
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] == '\0' || i == n)
		return (0);
	else
		return (-s2[i]);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len ++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int		i;
	int		len;
	char	*cated;

	i = 0;
	len = 0;
	cated = (char *) malloc(1024 * sizeof(char));
	while (dest[len])
	{
		cated[len] = dest[len];
		len++;
	}
	while (src[i] != '\0')
	{
		cated[len + i] = src[i];
		i++;
	}
	cated[len + i] = '\0';
	return (cated);
}
