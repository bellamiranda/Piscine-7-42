/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:58:52 by ismirand          #+#    #+#             */
/*   Updated: 2023/08/29 11:58:06 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	n;
	int	a;

	a = 1;
	while (a <= size)
	{
		n = size - 1;
		while (n > 0)
		{
			if (tab[n] < tab[n - 1])
			{
				x = tab[n];
				tab[n] = tab[n - 1];
				tab[n - 1] = x;
			}
			n--;
		}
		a++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	a[] = {5, 2, 8, 9, 6, 3, 7};
	int	s;

	s = 7;
	for (int i = 0; i < s; i++)
		printf("%d", a[i]);
	printf("%c", '\n');
	ft_sort_int_tab(a, s);
	for (int i = 0; i < s; i++)
		printf("%d", a[i]);
}
*/
