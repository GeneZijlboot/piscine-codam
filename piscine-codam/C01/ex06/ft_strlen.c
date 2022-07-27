/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 14:30:56 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/24 12:51:33 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a])
	{
		a++;
	}
	return (a);
}

// int	main(void)
// {
// 	char str[] = "bitterbal";
// 	printf("%d", ft_strlen(str));
// }