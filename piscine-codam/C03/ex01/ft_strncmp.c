/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/19 21:01:28 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/23 12:15:35 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while ((s1[a] != '\0' || s2[a] != '\0') && a < n)
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}

// int main(void)
// {
//     int n;
//     n = 2;
//     char s1[] = "afdk\0";
//     char s2[] = "abdks";
//     printf("the old strncmp %d\n", ft_strncmp(s1, s2, n));
// 	printf("the real strncmp = %i", strncmp(s1, s2, n));
// }