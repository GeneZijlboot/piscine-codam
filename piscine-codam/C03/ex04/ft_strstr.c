/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 12:29:56 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/24 01:16:37 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a + b] != '\0' && str[a + b] == to_find[b])
		{
			if (to_find[b + 1] == '\0')
				return (&str[a]);
				++b;
		}
		++a;
	}
	return (0);
}

int main(void)
{
    char str[] = "we be walkin fast";
    char to_find[]  = "fast";
    printf("%s", ft_strstr(str, to_find));
}