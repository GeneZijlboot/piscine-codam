/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_numbers.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 22:53:31 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/13 18:22:54 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	char	a;

	a = 47;
	while (a < 57)
	{
		a++;
		write(1, &a, 1);
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// }
