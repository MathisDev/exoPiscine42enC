/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:09:45 by mamottet          #+#    #+#             */
/*   Updated: 2023/01/23 01:43:40 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
	{
		return (1);
	}
	while(str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i ++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

#define SIZE 40

int main()
{
	char	tab[SIZE] = "AGHoHD";
	int	return_int;

	printf("Le char = '%s' \n",tab);	
	return_int = ft_str_is_uppercase(tab);
	printf("%d \n",return_int);
	if (return_int == 1)
	{
		printf("Il y a uniquement des min");
	}
	else
	{
		printf("Il m'y a pas uniquement des min");
	}
}
