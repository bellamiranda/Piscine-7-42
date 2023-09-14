/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 23:17:19 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/09 14:41:02 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	i;

	scanf("%i", &i);
	printf("%d\n", ft_recursive_factorial(i));
}*/
