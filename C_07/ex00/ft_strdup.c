/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 10:49:29 by mamottet          #+#    #+#             */
/*   Updated: 2023/02/02 13:12:28 by mamottet         ###   ########.fr       */
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
        char	*ret = (char*)malloc(sizeof(char) * ft_strlen(str));

        return ret;
}

#define SIZE 40

int main(void)
{
	char	str[SIZE] = "Hello je suis la";
	printf("%s",ft_strdup(str));
}
