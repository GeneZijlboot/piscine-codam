/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_alphabet.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/07 22:52:39 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/13 18:22:54 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 96;
	while (c < 122)
	{
		c++;
		write(1, &c, 1);
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// }
