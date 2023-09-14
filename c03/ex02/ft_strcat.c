/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 15:02:38 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/04 11:25:56 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = ft_strlen(dest);
	k = ft_strlen(src);
	while (i <= k)
	{
		dest[j + i] = src[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	a[17] = "abcdef";
	char	b[7] = "123456";
	char	c[17] = "abcdef";
	
	printf("Funcao existente: %s\n", strcat(a, b));
	printf("Minha funcao: %s\n", ft_strcat(c, b));
}*/
