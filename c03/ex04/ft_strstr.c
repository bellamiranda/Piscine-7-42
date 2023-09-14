/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:15:54 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/07 16:03:52 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	if (to_find == 0 || to_find[0] == '\0')
		return (str);
	while (str[0] != '\0')
	{
		i = 0;
		if (to_find[i] == str[0])
		{
			while (to_find[i] != '\0' && to_find[i] == str[i])
				i++;
			if (to_find[i] == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	a1[] = "Piscine 42 e dms";
	char    a2[] = "Piscine 42 e dms";
	char    a3[] = "TeteTes";
	char    a4[] = "TeteTes";
	char	b[] = "42";
	char	c[] = "Teste";

	printf("Minha: %s\n", ft_strstr(a1, b));
	printf("Strstr: %s\n", strstr(a2, b));
	printf("Minha: %s\n", ft_strstr(a3, c));
	printf("Strstr: %s\n", strstr(a4, c));
}*/
