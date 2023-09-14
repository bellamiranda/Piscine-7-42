/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:41:51 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/04 16:22:13 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	a[17] = "abcde";
	char	b[10] = "123456";
	char	c[17] = "abcde";
	int	nb;

	nb = 4;
	printf("Minha funcao: %s\n", ft_strncat(a, b, nb));
	printf("Funcao existente: %s\n", strncat(c, b, nb));
}*/
