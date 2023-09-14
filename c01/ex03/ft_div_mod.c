/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 13:41:49 by ismirand          #+#    #+#             */
/*   Updated: 2023/08/29 12:25:23 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
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
	ft_div_mod(i, j, x, y);
	printf("%i, %i", i, j);
}
*/
