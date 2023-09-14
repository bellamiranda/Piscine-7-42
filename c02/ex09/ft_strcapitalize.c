/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:13:01 by ismirand          #+#    #+#             */
/*   Updated: 2023/08/31 19:53:10 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	x;

	x = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] = str[x] + 32;
		x++;
	}
	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] < '0' || (str[x] > '9' && str[x] < 'A') || 
			(str[x] > 'Z' && str[x] < 'a') || str[x] > 'z')
		{
			if (str[x + 1] >= 'a' && str[x + 1] <= 'z')
				str[x + 1] = str[x + 1] - 32;
		}
		x++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	a[] = " bom dia, tudo-bem? QUARENTA+e-dois";
	char	b[] = "Bom dIA ? 42edms!!UFA; ufa";
	char	c[] = "";
	char	*A;
	char	*B;
	char	*C;

	A = ft_strcapitalize(a);
	printf("%s\n", a);
	B = ft_strcapitalize(b);
	printf("%s\n", B);
	C = ft_strcapitalize(c);
	printf("%s\n", C);
}*/
