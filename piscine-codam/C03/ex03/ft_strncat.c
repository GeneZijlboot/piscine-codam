/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/21 11:06:10 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/21 21:42:22 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	a;
	unsigned int	o;

	o = 0;
	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[o] != '\0' && o < nb)
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
//     unsigned int nb;
//     nb = 3;
//     char src[] = "tafel";
//     char dest[] = "milkshake";
//     printf("%s", ft_strncat(src, dest, nb));
// }