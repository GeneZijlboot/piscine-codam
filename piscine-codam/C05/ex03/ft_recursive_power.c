/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_recursive_power.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 12:08:50 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/27 14:32:47 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power < 1)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

// int	main(void)
// {
// 	printf("%d", ft_recursive_power(2, 10));
// }