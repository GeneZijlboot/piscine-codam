/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_rev_int_tab.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 19:40:49 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/24 16:17:26 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	swap;

	i = 0;
	a = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[a];
		tab[a] = swap;
		i++;
		a--;
	}
}

int	main(void)
{
	int	i[] = {1, 3, 5, 6, 7};
	int	j = 0;

	ft_rev_int_tab(i, 5);
	while (j < 5)
	{
		printf("%d, ", i[j]);
		j++;
	}
	return (0);
}