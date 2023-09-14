/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:29:32 by ismirand          #+#    #+#             */
/*   Updated: 2023/08/31 19:37:29 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
		return (1);
	while (str[x] != '\0')
	{
		if (str[x] < 'A' || str[x] > 'Z')
			return (0);
		x++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "ABCDEFGH";
	char	b[] = "ABCdEFg";
	char	c[] = "";
	char	d[] = "abcdefg";
	int	A;
	int	B;
	int	C;
	int	D;

	A = ft_str_is_uppercase(a);
	printf("%i\n", A);
	B = ft_str_is_uppercase(b);
	printf("%i\n", B);
	C = ft_str_is_uppercase(c);
	printf("%i\n", C);
	D = ft_str_is_uppercase(d);
	printf("%i\n", D);
}*/
