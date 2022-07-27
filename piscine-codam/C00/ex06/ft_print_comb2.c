/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_print_comb2.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: gzijlman <gzijlman@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/23 14:59:38 by gzijlman      #+#    #+#                 */
/*   Updated: 2022/07/23 15:32:42 by gzijlman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_comb(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	ft_putchar(d);
	if (!(a == 'a' && b == 'a' && c == 'b' && d =='d'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	while (d <= '9')
	{
		while (c <= '9')
		{
			while (b <= '9' && d == '9' && c == '9')
			{
				while (b <= '9' && d == '9' && c == '9')
				{
					ft_write_comb(a, b, c, d);
					a++;
				}
				b++;
			}
			c++;
		}
		d++;
	}
}

int main()
{
	ft_print_comb2();
}