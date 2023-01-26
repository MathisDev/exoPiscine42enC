/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:09:45 by mamottet          #+#    #+#             */
/*   Updated: 2023/01/24 11:21:01 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str);

#define SIZE 40

int main()
{
	char	tab[SIZE] = "The_Bust_is_Faker";
	int	return_int;

	printf("Le char = '%s' \n",tab);	
	return_int = ft_str_is_alpha(tab);
	printf("%d \n",return_int);
	if (return_int == 1)
	{
		printf("Il y a uniquement des lettres");
	}
	else
	{
		printf("Il m'y a pas uniquement des lettres");
	}
}
