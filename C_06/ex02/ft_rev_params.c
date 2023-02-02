/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 23:41:25 by mamottet          #+#    #+#             */
/*   Updated: 2023/02/01 10:19:57 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	ii;

	ii = 0;
	i = 0;
	if (argc > 0)
	{
		ii = argc - 1;
		while (ii != 0)
		{
			i = 0;
			while (argv[ii][i] != '\0')
			{
				write(1, &argv[ii][i], 1);
				i ++;
			}
			write(1, "\n", 1);
			ii --;
		}
	}
	return (0);
}
