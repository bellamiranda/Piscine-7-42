/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:02:06 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/08 11:46:39 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	a[] = "hellohello";
	char	b[] = "12345";
	int	n;
	char	*w;
	char	*r;

	n = 5;//dest<n<src problema - cria uma string sem nulo
	//n<=src - copia src e completa com dest
	//n>src - poe nulo e para de copiar(2o while)
	printf("Initial string is: %s\n", a);
	w = ft_strncpy(a, b, n);
	printf("My function creates: %s\n", w);
	r = strncpy(a, b, n);
	printf("Existing strncpy returns: %s\n", r);
}
