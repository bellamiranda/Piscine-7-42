/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 19:45:05 by ismirand          #+#    #+#             */
/*   Updated: 2023/08/31 19:39:30 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
		return (1);
	while (str[x] != '\0')
	{
		if (str[x] < 32 || str[x] > 126)
			return (0);
		x++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "Ab1&#*(/]\\e5";
	char	b[] = "Ah2BC\nd5EFg";
	char	c[] = "";
	char	d[] = "   ";
	int	A;
	int	B;
	int	C;
	int	D;

	A = ft_str_is_printable(a);
	printf("%i\n", A);
	B = ft_str_is_printable(b);
	printf("%i\n", B);
	C = ft_str_is_printable(c);
	printf("%i\n", C);
	D = ft_str_is_printable(d);
	printf("%i\n", D);
}*/
