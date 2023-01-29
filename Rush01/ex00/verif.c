/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:08:38 by mamottet          #+#    #+#             */
/*   Updated: 2023/01/29 15:04:51 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	verif(char *str)
{
	int	i;
	int	ii;

	i = 0;
	ii = 0;
	while (str[ii] != '\0')
	{
		if (str[ii] <= '1' && str[ii] >= '4')
		{
			return (0);
		}
		else
			i ++;
		ii ++;
	}
	if (i != 16)
		return (0);
	return (1);
}
void	make_perfect_int_tab(char *str,int *tab)
{
	int	ii;
	int	i;
	int	it;

	it = 0;
	ii = 0;
	i = 0;
	while (str[ii] != '\0')
	{
		if (str[ii] >= '1' && str[ii] <= '4')
		{
			tab[i] = str[ii] - '0';
			i ++;
		}
		ii ++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	tab_int[16];
	int	v;

	v = 0;
	i = 0;
	v = verif(argv[1]);
	if (v == 1)
		printf("Error1\n");
	if (v == 2)
		printf("Error2\n");
	else 
	{
		make_perfect_int_tab(argv[1],tab_int);
		while (i != 16)
		{
			printf("%d",tab_int[i]);
			i ++;
		}
	}
	return (0);
}

