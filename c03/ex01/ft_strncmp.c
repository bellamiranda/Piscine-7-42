/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:45:57 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/05 14:58:42 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] < s2[i] || s1[i] > s2[i])
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
	unsigned int	i;

	i = 5;
	printf("My function: %d\n", ft_strncmp(a, c, i));
	printf("Existing function: %d\n", strncmp(a, c, i));
	printf("My function: %d\n", ft_strncmp(b, d, i));
	printf("Existing function: %d\n", strncmp(b, d, i));
	printf("My function: %d\n", ft_strncmp(c, b, i));
	printf("Existing function: %d\n", strncmp(c, b, i));
	printf("My function: %d\n", ft_strncmp(d, e, i));
	printf("Existing function: %d\n", strncmp(d, e, i));
	printf("My function: %d\n", ft_strncmp(f, d, i));
        printf("Existing function: %d\n", strncmp(f, d, i));
}*/
