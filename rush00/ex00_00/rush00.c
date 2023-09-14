/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:50:05 by ismirand          #+#    #+#             */
/*   Updated: 2023/08/26 15:28:57 by ismirand         ###   ########.fr       */
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
			if ((a == 1 || a == x) && (b == 1 || b == y))
				ft_putchar('o');
			else if (1 < a < x && (b == 1 || b == y))
				ft_putchar('-');
			else if (1 < b < y && (a == 1 || a == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
