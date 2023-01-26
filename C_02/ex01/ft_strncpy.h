/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:32:48 by mamottet          #+#    #+#             */
/*   Updated: 2023/01/22 13:06:55 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while(i != n)
	{
		dest[i] = src[i];
		i ++;
	}
	printf("\n");
}
int main () {
	char src[40];
	char dest[12];
	char src0[40];
	char dest0[12];

	strcpy(src0, "This is tutorialspoint.com");
	strcpy(src, "This is tutorialspoint.com");
	strncpy(dest, src, 10);
	ft_strncpy(dest0, src0, 10);
	printf("Final copied string : %s\n", dest);
	printf("Fianl my copied string : %s\n",dest0);
   
	return(0);
}
