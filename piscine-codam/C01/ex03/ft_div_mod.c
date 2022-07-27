/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_div_mod.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/16 23:05:06 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/17 00:49:21 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	mod;
// 	int	div;
// 	a = 5;
// 	b = 10;
// 	ft_div_mod(a, b, &mod, &div);
// 	printf("the devision between a and b = %d\n", div);
// 	printf("the remainder of the division is = %d\n", mod);
// }