/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 20:34:33 by ismirand          #+#    #+#             */
/*   Updated: 2023/08/31 19:42:02 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 97 && str[x] <= 122)
			str[x] = str[x] - 32;
		x++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "only lower case";
	char	b[] = "Some Upper Case";
	char	c[] = "ONLY UPPER CASE";
	char	d[] = "Some Letters 123";
	char	*A;
	char	*B;
	char	*C;
	char	*D;

	A = ft_strupcase(a);
	printf("%s\n", A);
	B = ft_strupcase(b);
	printf("%s\n", B);
	C = ft_strupcase(c);
	printf("%s\n", C);
	D = ft_strupcase(d);
	printf("%s\n", D);
}*/
