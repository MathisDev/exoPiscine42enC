/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <mamottet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 23:48:11 by mamottet          #+#    #+#             */
/*   Updated: 2023/02/02 16:06:51 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i ++;
	}
	return (i);
}

void	putstr(char **nb, int argc)
{
	int	ii;

	ii = 0;
	while (ii != argc)
	{
		write(1, &argv[ii], ft_strlen(argv[ii]));
		write(1, "\n", 1);
		ii ++;
	}
}

int	main(int argc, char *argv[])
{
	int		ii;
	int		i;
	char	*temp;

	ii = 1;
	while (ii < argc)
	{	
		i = ii + 1;
		while (i != argc)
		{
			if (ft_strcmp(argv[ii], argv[i]) > 0)
			{
				temp = argv[ii];
				argv[ii] = argv[i];
				argv[i] = temp;
			}
			i ++;
		}
		ii ++;
	}
	putstr(argv, argc);
	return (0);
}
