/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:49:29 by mamottet          #+#    #+#             */
/*   Updated: 2023/02/08 17:15:21 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i ++;
	}
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*ret;
	int		i;

	i = 0;
	ret = (char *) malloc(sizeof(char) * ft_strlen(str));
	if (!ret)
		return (NULL);
	while (str[i])
	{
		ret[i] = str[i];
		i ++;
	}
	ret[i] = '\0';
	return (ret);
}
