/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_swap.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/15 13:46:51 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/16 17:55:03 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	s;

	s = *a;
	*a = *b;
	*b = s;
}

//int	main(void)
//{
//	int	a;
//	int	b;
//
//	a = 10;
//	b = 3000;
//	ft_swap(&a, &b);
//	printf("%d", a);
//	printf("%d", b);
//}
