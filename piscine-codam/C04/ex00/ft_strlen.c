/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 13:48:54 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/25 21:23:34 by gzijlman      ########   odam.nl         */
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

// int main(void)
// {
// 	char str[] = "bitterbal";
// 	printf("%d", ft_strlen(str));
// }