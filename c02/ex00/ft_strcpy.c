/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 12:53:14 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/08 11:39:00 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	p;

	p = 0;
	while (src[p])
	{
		dest[p] = src[p];
		p++;
	}
	dest[p] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	a[] = "hellohello";
	char	b[] = "12345";
	char	*w;
	char	*r;

	printf("Inicial string is: %s\n", a);
	w = ft_strcpy(a, b);
	printf("My function creates: %s\n", w);
	r = strcpy(a, b);
	printf("Existing strcpy returns: %s\n", r);
}*/
