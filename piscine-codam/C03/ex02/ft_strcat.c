/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strcat.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 21:01:28 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/21 16:03:40 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	o;

	o = 0;
	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[o] != '\0')
	{
		dest[a] = src[o];
		a++;
		o++;
	}
	dest[a] = '\0';
	return (dest);
}

// int main(void)
// {
//     char src[] = "tafel";
//     char dest[] = "milkshake";
//     printf("%s", ft_strcat(src, dest));
// }