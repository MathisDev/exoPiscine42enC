/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <mamottet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 00:59:53 by mamottet          #+#    #+#             */
/*   Updated: 2023/01/25 09:45:20 by mamottet         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	ii;

	i = 0;
	ii = ft_strlen(dest);
	while (src[i] && nb > 0)
	{
		dest[ii + i] = src[i];
		i++;
		nb--;
	}
	dest[ii + i] = 0;
	return (dest);
}
