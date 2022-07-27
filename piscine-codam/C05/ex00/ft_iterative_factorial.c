/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_iterative_factorial.c                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/25 13:35:01 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/27 14:33:59 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	count;

	count = 1;
	i = nb;
	if (nb < 0)
	{
		return (0);
	}
	while (count < i)
	{
		nb = nb * count;
		count++;
	}
	if (nb == 0)
	{
		return (1);
	}
	return (nb);
}

// int main(void)
// {
// 	printf("%d", ft_iterative_factorial(6));
// }