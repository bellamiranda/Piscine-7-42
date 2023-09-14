/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 16:37:54 by faneves           #+#    #+#             */
/*   Updated: 2023/08/26 17:11:47 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	b = 1;
	while (b <= y)
	{
		a = 1;
		while (a <= x)
		{
			if ((a == 1 && b == 1) || (a == x && b == y && !(a == 1 || b == 1)))
				ft_putchar('/');
			else if ((a == x && b == 1) || (a == 1 && b == y))
				ft_putchar('\\');
			else if ((1 < a < x && (b == 1 || b == y)) || 
				(1 < b < y && (a == 1 || a == x)))
				ft_putchar('*');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
