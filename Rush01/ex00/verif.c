/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:08:38 by mamottet          #+#    #+#             */
/*   Updated: 2023/01/29 15:41:27 by Onizukkka        ###   ########.fr       */
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
			return (1);
		}
		else
			i ++;
		ii ++;
	}
	if (i != 16)
		return (1);
	return (0);
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

int check(int *tab)
{
	int i;
	int ii;

	i = 0;
	ii = 4;

	while (ii != 12)	 	 
	{
		if ((tab[i] + tab[ii]) <= 5)
		{
			printf("%d - %d - %d\n",tab[i],tab[ii],ii);
			if (i == 3)
			{
				i = 12;
			}
			else
			{
				i ++;
			}
			ii ++;
		}
		else
			return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	tab_int[16];
	int	v;
	int c; 

	v = 0;
	i = 0;
	v = verif(argv[1]);

	if (v == 2)
		printf("Error VERIF \n");
	else 
	{
		make_perfect_int_tab(argv[1],tab_int);
	}
	c = check(tab_int);
	if (c == 1)
	{
		printf("Error CHECK");
	}
	else 
		while (i != 16)
		{
			printf("%d",tab_int[i]);
			i ++;
		}
	return (0);
}

