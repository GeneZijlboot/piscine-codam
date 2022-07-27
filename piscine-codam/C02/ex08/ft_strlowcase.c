/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlowcase.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 18:03:38 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/19 20:25:34 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 65 && str[a] <= 90)
		{
			str[a] = str[a] + 32;
		}
		a++;
	}
	return (str);
}

// int main(void)
// {
// 	char str[] = "ABCDERFG";
//     printf("%s", ft_strlowcase(str));
//     return(0);
// }