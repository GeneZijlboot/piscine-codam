/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_numeric.c                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 16:04:14 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/19 17:37:22 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!(*str >= '0' && *str <= '9'))
		{
			return (0);
		}
	str++;
	}
	return (1);
}

// int main(void)
// {
// printf("%d", ft_str_is_numeric("1234567890"));
// printf("\n");
// printf("%d", ft_str_is_numeric("dfghjkl;"));
// }