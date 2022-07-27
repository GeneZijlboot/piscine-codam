/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strupcase.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 17:41:11 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/19 18:02:46 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}

// int main(void)
// {
// 	char str[] = "abcdefg";
//     printf("%s", ft_strupcase(str));
//     return(0);
// }