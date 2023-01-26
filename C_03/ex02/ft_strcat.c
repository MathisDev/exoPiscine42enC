/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 15:44:55 by mamottet          #+#    #+#             */
/*   Updated: 2023/01/25 14:13:39 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	ii;

	ii = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[ii + i] = src[i];
		i ++;
	}	
	dest[ii + i] = '\0';
	return (dest);
}
