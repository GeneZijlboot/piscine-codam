/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_program_name.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/27 12:46:06 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/27 21:46:48 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 0)
		return (0);
	while (argv[0][i] != '\0')
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
