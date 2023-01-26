/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 10:11:58 by mamottet          #+#    #+#             */
/*   Updated: 2023/01/25 15:11:15 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char str)
{
	if ((str >= 9 && str <= 13) || str == ' ')
	{
		return (1);
	}
	return (0);
}

int	is_num(char str)
{
	if (str >= '0' && str <= '9')
	{
		return (1);
	}
	return (0);
}

int	is_alpha(char str)
{
	if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z'))
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	i;
	int	f;
	int	nop;

	i = 0;
	f = 0;
	nop = 1;
	while (is_space(str[i]) != 0)
		i ++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			nop *= -1;
		i ++;
	}
	while (is_alpha(str[i]) == 0)
	{
		if (is_num(str[i]) != 0)
			f = f * 10 + str[i] - '0';
		i ++;
	}
	return (f * nop);
}
