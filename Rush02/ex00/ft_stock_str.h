/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 10:17:28 by awalter           #+#    #+#             */
/*   Updated: 2023/02/04 18:04:38 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H

# define FT_STOCK_STR_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <sys/stat.h>
# include <fcntl.h>

typedef struct s_stock_str
{
	char	*key;
	char	*value;
}	t_stock_str;

void	ft_putstr(char *str);
char	*c_str(void);
int		count_words(char *str);
int		ft_len(char *str);
char	**split(char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_nblen(char *str);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
char	*trans(char tt, int nbo);
char	*writing(char *arg, struct s_stock_str *par);
char	*ft_cat(char dest, char src);
char	*normi(char *test, char arg, char *res, struct s_stock_str *par);
char	*normi2(char *test, char *res, struct s_stock_str *par);

#endif
