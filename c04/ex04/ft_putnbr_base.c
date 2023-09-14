/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 10:22:00 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/07 18:33:07 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}

int	ft_chartwice(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_reverse(long x, char *base)
{
	if ((x / ft_strlen(base)) != 0)
		ft_reverse(x / ft_strlen(base), base);
	ft_putchar(base[x % ft_strlen(base)]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	x;
	long	i;

	x = (long) nbr;
	i = 0;
	while (base[i] != '\0' || *base == '\0')
	{
		if (base[i] == '+' || base[i] == '-' || 
			ft_chartwice(base) == 1 || ft_strlen(base) <= 1)
			return ;
		i++;
	}
	if (x < 0)
	{
		ft_putchar('-');
		x = -x;
	}
	ft_reverse(x, base);
}
/*
#include <stdlib.h>

int	main(int argc, char **argv)
{
	(void) argc;

	ft_putnbr_base(atoi(argv[1]), argv[2]);
}//compila com string e dps "base"
*/
