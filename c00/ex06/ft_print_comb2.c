/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 11:03:23 by ismirand          #+#    #+#             */
/*   Updated: 2023/08/26 21:51:05 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_convert(int n)
{
	int	a;
	int	b;

	a = n / 10 + '0';
	b = n % 10 + '0';
	ft_putchar(a);
	ft_putchar(b);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_convert(a);
			ft_putchar(' ');
			ft_convert(b);
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
}
*/
