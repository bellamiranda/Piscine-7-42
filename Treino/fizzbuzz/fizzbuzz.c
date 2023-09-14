/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:58:25 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/13 16:35:55 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_fizzbuzz(int a)
{
	if (a % 3 == 0 && a % 5 == 0)
		write(1, "fizzbuzz", 8);
	else if (a % 3 == 0)
		write(1, "fizz", 4);
	else if (a % 5 == 0)
		write(1, "buzz", 4);
	else 
	{
		if (a < 10)
			ft_putchar(a + '0');
		else if (a >= 10)
		{
			ft_putchar(a / 10 + '0');
			ft_putchar(a % 10 + '0');
		}
	}
}

int	main(void)
{
	int	i;

	i = 1;
	while (i < 100)
	{
		ft_fizzbuzz(i);
		write(1, "\n", 1);
		i++;
	}
	write(1, "buzz", 4);
}
