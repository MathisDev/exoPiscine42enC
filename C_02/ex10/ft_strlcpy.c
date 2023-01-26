/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:57:24 by mamottet          #+#    #+#             */
/*   Updated: 2023/01/24 16:48:47 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	ii;

	i = ft_strlen(src);
	ii = 0;
	if (i + 1 < size)
	{
		while (ii < i + 1)
		{
			dest[ii] = src[ii];
			ii++;
		}
	}
	else if (size > 0)
	{
		while (ii < size - 1)
		{
			dest[ii] = src[ii];
			ii++;
		}
		dest[ii] = 0;
	}
	return (i);
}
