/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamottet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 08:54:23 by mamottet          #+#    #+#             */
/*   Updated: 2023/01/21 18:10:00 by mamottet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while(dest[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
}

#define SIZE 40

int main()
{
	char source[SIZE] = "This is the source string";
	char destination[SIZE] = "And this is the destination string";
	char * return_string;
		
	char src[SIZE] = "This is the source string";	
	char dest[SIZE] = "And this is the destination string";
	char *return_my;

	printf("Original strcpy :\n");	 
 	printf( "destination is originally = \"%s\"\n", destination );
 	return_string = strcpy( destination, source );
 	printf( "After strcpy, destination becomes \"%s\"\n", destination );
	printf("My ft_strcpy");
	printf("destination avant = %s \n",dest);
	return_my = ft_strcpy(dest, src);
	printf("destination After = %s \n",dest);
}
