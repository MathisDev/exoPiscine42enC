/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <mamottet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 01:03:47 by mamottet          #+#    #+#             */
/*   Updated: 2023/01/25 14:11:07 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	ii;

	i = 0;
	ii = 0;
	if (*to_find == 0)
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			ii = 0;
			while (str[i + ii] == to_find[ii] && to_find[ii])
				ii++;
			if (to_find[ii] == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
