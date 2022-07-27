/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/17 20:07:31 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/24 12:50:32 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		write(1, &str[a], 1);
		a++;
	}
}

// int	main(void)
// {
// 	char	str[] = "hello";
// 	ft_putstr(str);
// 	return (0);
// }
