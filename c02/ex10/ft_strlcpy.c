/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:44:15 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/02 14:18:39 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		if (size == 0)
			*dest = dest[0];
		else if (i < (size - 1))
			dest[i] = src[i];
		else if (i >= (size - 1))
			dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (i);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char		a[] = "abcde";
	char		b[] = "12345678";
	unsigned int	A;
	unsigned int	s;

	s = 0;
	//printf("original function: %zu\n", strlcpy(a, b, s));
	A = ft_strlcpy(a, b, s);
	printf("string char: %s\n", a);
	printf("retorno: %u\n", A);
}*/
