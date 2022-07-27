/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 16:17:55 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/27 16:27:11 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	if (nb <= 0)
		return (0);
	while (b <= nb && nb <= 2147395600)
	{
		a++;
		b = a * a;
		if (b == nb)
			return (a);
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_sqrt(2147395600));
// }