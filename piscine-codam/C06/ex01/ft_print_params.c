/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_params.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 20:57:26 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/27 21:51:22 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	i = 1;
	while (i != argc)
	{
		c = 0;
		while (argv[i][c] != '\0')
		{
			write(1, &argv[i][c], 1);
			c++;
		}
		write(1, "\n", 1);
		i++;
	}
}
