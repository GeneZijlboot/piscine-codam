/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_uppercase.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 17:22:20 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/19 17:36:39 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
		{
			return (0);
		}
	str++;
	}
	return (1);
}

// int main(void)
// {
// printf("%d", ft_str_is_uppercase("ASDFGHJ"));
// printf("\n");
// printf("%d", ft_str_is_uppercase("sdfghjkl"));
// }