/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:06:43 by ismirand          #+#    #+#             */
/*   Updated: 2023/08/29 12:26:15 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
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
	ft_swap(x, y);
	printf("%i, %i", i, j);
}
*/
