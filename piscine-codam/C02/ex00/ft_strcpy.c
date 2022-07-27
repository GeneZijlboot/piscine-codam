/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/17 15:16:31 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/20 12:33:14 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}

int main(void)
{
    char dest[] = "aloha";
    char src[] = "banana";

	printf("%s\n", dest);
	ft_strcpy(dest, src);
    printf("%s", dest);
    printf("\n");
}
