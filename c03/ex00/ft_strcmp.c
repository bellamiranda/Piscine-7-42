/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 09:44:05 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/04 16:19:22 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	a[] = "abcDe"; //a>c 1
	char	b[] = "abcde"; //b=d 0
	char	c[] = "a1cde"; //c<b -1
	char	d[] = "abcde";
	char	e[] = "abc";   //e<d -1
	char	f[] = "";

	printf("My function: %d\n", ft_strcmp(a, c));
	printf("Existing function: %d\n", strcmp(a, c));
	printf("My function: %d\n", ft_strcmp(b, d));
	printf("Existing function: %d\n", strcmp(b, d));
	printf("My function: %d\n", ft_strcmp(c, b));
	printf("Existing function: %d\n", strcmp(c, b));
	printf("My function: %d\n", ft_strcmp(d, e));
	printf("Existing function: %d\n", strcmp(d, e));
	printf("My function: %d\n", ft_strcmp(f, d));
        printf("Existing function: %d\n", strcmp(f, d));
}*/
