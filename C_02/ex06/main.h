/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:09:45 by mamottet          #+#    #+#             */
/*   Updated: 2023/01/24 11:27:33 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str);

#define SIZE 100

int main(void)
{
	char	tab[SIZE] = "";
	int	return_int;

	printf("Le char = '%s' \n",tab);	
	return_int = ft_str_is_printable(tab);
	printf("%d \n",return_int);
	if (return_int == 1)
	{
		printf("Il y a uniquement des car printable");
	}
	else
	{
		printf("Il m'y a pas uniquement des car printable");
	}
}
