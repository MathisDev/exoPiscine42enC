/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:21:24 by mamottet          #+#    #+#             */
/*   Updated: 2023/02/08 17:17:19 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	t_malloc(int size, char **strs, char *sep)
{
	int	i;
	int	res;

	if (size == 0)
		return (1);
	i = 0;
	res = 0;
	while (i < size)
		res += ft_strlen(strs[i++]);
	res += ft_strlen(sep) * (size - 1);
	return (res + 1);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	destlen;

	i = 0;
	destlen = ft_strlen(dest);
	while (src[i])
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = 0;
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		i;

	tab = malloc(t_malloc(size, strs, sep) * sizeof(char));
	if (!tab)
		return (NULL);
	tab[0] = 0;
	if (size == 0)
		return (tab);
	i = 0;
	while (i < size)
	{
		ft_strcat(tab, strs[i]);
		if (i != size - 1)
			ft_strcat(tab, sep);
		i++;
	}
	tab[ft_strlen(tab)] = 0;
	return (tab);
}
