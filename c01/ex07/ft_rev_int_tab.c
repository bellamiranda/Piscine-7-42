/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:37:09 by ismirand          #+#    #+#             */
/*   Updated: 2023/08/29 12:16:48 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;

	i = 0;
	while (i < size / 2)
	{
		x = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = x;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	a[] = {1, 2, 3, 4, 5, 6};
	int	s;

	s = 6;
	for (int i = 0; i < s; i++)
		printf("%d", a[i]);
	printf("%c", '\n');
	ft_rev_int_tab(a, s);
	for (int i = 0; i < s; i++)
		printf("%d", a[i]);
}
*/
