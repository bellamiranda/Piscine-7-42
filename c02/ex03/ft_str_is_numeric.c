/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:57:25 by ismirand          #+#    #+#             */
/*   Updated: 2023/08/31 19:35:15 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
		return (1);
	while (str[x] != '\0')
	{
		if (str[x] < '0' || str[x] > '9')
			return (0);
		x++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "123456789";
	char	b[] = "123r56";
	char	c[] = "";
	char	d[] = "nenhum numero";
	int	A;
	int	B;
	int	C;
	int	D;

	A = ft_str_is_numeric(a);
	printf("%d\n", A);
	B = ft_str_is_numeric(b);
	printf("%d\n", B);
	C = ft_str_is_numeric(c);
	printf("%d\n", C);
	D = ft_str_is_numeric(d);
	printf("%d\n", D);
}*/
