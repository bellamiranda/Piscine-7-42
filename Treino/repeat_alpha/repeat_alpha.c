/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:28:52 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/13 15:38:06 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_repeat_alpha(char *a)
{
	int	i;
	int	k;

	i = 0;
	while (a[i])
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			k = a[i] - 64;
			while (k > 0)
			{
				ft_putchar(a[i]);
				k--;
			}
		}
		else if (a[i] >= 'a' && a[i] <= 'z')
		{
			k = a[i] - 96;
			while (k > 0)
			{
				ft_putchar(a[i]);
				k--;
			}
		}
		else
			ft_putchar(a[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_repeat_alpha(argv[1]);
	write(1, "\n", 1);
}
