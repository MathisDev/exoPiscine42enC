/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_str.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 18:43:00 by arazzok           #+#    #+#             */
/*   Updated: 2023/02/04 19:07:50 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

char	*c_str(void)
{
	char	*str;
	int		fd;
	int		fs;

	str = (char *) malloc(1024 * sizeof(char));
	if (!str)
		return (NULL);
	fd = open("numbers.dict", O_RDONLY);
	fs = read(fd, str, 1024);
	if (fs)
		close(fd);
	else
		close(fd);
	return (str);
}
