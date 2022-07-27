/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_alpha.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 14:31:26 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/20 12:38:51 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!(*str >= 'A' && *str <= 'Z') && !(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
	str++;
	}
	return (1);
}

int main(void)
{
printf("%d", ft_str_is_alpha("#$%^&*()"));
printf("\n");
printf("%d", ft_str_is_alpha("aaaaaaaZZZZzzzzAAAAA"));
}