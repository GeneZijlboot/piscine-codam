/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_is_negative.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 22:53:38 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/13 18:22:54 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_is_negative(int n)
{
	char	b;
	char	a;

	a = 'P';
	b = 'N';
	if (n < 0)
	{
		write(1, &b, 1);
	}
	else
	{
		write(1, &a, 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative(1);
// }
