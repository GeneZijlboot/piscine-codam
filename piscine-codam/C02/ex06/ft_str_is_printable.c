/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_str_is_printable.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 17:28:01 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/19 23:43:42 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_str_is_printable(char *str)
{
	while (str[0] != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
	str++;
	}
	return (1);
}

// int main(void)
// {
//     printf("%d", ft_str_is_printable("ASDF	GHJ"));
//     printf("\n");
//     printf("%d", ft_str_is_printable("sdfghjkl"));
// } 