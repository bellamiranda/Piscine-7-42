/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfukuda- <mfukuda-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:04:40 by mfukuda-          #+#    #+#             */
/*   Updated: 2023/08/26 15:56:13 by mfukuda-         ###   ########.fr       */
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
			if (a == 1 && (b == 1 || b == y))
				ft_putchar('A');
			else if (a == x && (b == 1 || b == y))
				ft_putchar('C');
			else if (((b == 1 || b == y) && a < x) || 
				((a == 1 || a == x) && b < y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
