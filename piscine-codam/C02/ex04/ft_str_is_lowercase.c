/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_lowercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 17:19:41 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/19 17:37:02 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
	str++;
	}
	return (1);
}

// int main(void)
// {
// printf("%d", ft_str_is_lowercase("asdfghnj"));
// printf("\n");
// printf("%d", ft_str_is_lowercase("SDFGHJK"));
// }