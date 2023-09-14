/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:43:33 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/11 16:25:55 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *a)
{
	unsigned int	i;

	i = 0;
	while (a[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s_dest;
	unsigned int	s_src;
	unsigned int	i;
	unsigned int	j;

	s_dest = ft_strlen(dest);
	s_src = ft_strlen(src);
	j = s_dest;
	i = 0;
	if (size <= s_dest || size == 0)
		return (size + s_src);
	while (size > (j + 1) && src[i] != '\0')
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (s_dest + s_src);
}
/*
#include <stdio.h>

int	main(void)
{
	char		a[20] = "123";
	char		b[11] = "abcdef";
	unsigned int	s;

	s = 2;
	printf("Retorno: %u\n", ft_strlcat(a, b, s));
	printf("dest criada: %s\n", a);
}*/
