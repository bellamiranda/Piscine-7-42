/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:23:36 by ismirand          #+#    #+#             */
/*   Updated: 2023/08/29 12:24:34 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *a / *b;
	*b = x % *b;
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;
	int	j;
	int	*x;
	int	*y;

	scanf("%i", &i);
	scanf("%i", &j);
	x = &i;
	y = &j;
	ft_ultimate_div_mod(x, y);
	printf("%i, %i", i, j);
}
*/
