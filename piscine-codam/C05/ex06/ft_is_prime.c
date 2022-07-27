/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_prime.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 16:29:04 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/27 16:46:35 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_is_prime(int nb)
{
	int	a;
	int	c;

	a = 1;
	c = 0;
	if (nb < 0)
		return (0);
	while (a <= nb)
	{
		if (nb % a == 0)
			c++;
		if (a == 2147483647)
			break ;
		a++;
	}
	if (c == 2)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_is_prime(2147483647));
// }
