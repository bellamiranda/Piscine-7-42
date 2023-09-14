/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:08:02 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/09 19:10:06 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / i))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_is_prime(nb) == 0)
	{
		if (nb % 2 == 0)
			nb++;
		else
			nb = nb + 2;
	}
	return (nb);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	i;

	scanf("%i", &i);
	printf("%i\n", ft_find_next_prime(i));
}*/
