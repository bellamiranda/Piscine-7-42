/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:18:18 by ismirand          #+#    #+#             */
/*   Updated: 2023/08/31 19:36:32 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
		return (1);
	while (str[x] != '\0')
	{
		if (str[x] < 'a' || str[x] > 'z')
			return (0);
		x++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "onlylowercase";
	char	b[] = "capsLock";
	char	c[] = "";
	char	d[] = "CAPSLOCK";
	int	A;
	int	B;
	int	C;
	int	D;

	A = ft_str_is_lowercase(a);
	printf("%d\n", A);
	B = ft_str_is_lowercase(b);
	printf("%d\n", B);
	C = ft_str_is_lowercase(c);
	printf("%d\n", C);
	D = ft_str_is_lowercase(d);
	printf("%d\n", D);
}*/
