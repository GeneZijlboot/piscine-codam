/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_params.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 21:52:05 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/27 21:53:31 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	i = 1;
	while (i < argc)
	{
		c = 0;
		while (argv[argc - i][c] != '\0')
		{
			write(1, &argv[argc - i][c], 1);
			c++;
		}
		write(1, "\n", 1);
		i++;
	}
}
