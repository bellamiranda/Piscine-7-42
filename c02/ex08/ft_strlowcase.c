/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:32:52 by ismirand          #+#    #+#             */
/*   Updated: 2023/08/31 19:43:40 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 65 && str[x] <= 90)
			str[x] = str[x] + 32;
		x++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "ONLY UPPER CASE";
	char	b[] = "only lower case";
	char	c[] = "Mixed LetTeRs 123";
	char	*A;
	char	*B;
	char	*C;

	A = ft_strlowcase(a);
	printf("%s\n", A);
	B = ft_strlowcase(b);
	printf("%s\n", B);
	C = ft_strlowcase(c);
	printf("%s\n", C);
}*/
