/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:30:52 by ismirand          #+#    #+#             */
/*   Updated: 2023/08/31 19:33:48 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
		return (1);
	while (str[x] != '\0')
	{
		if (str[x] < 'A' || (str[x] > 'Z' && str[x] < 'a') || str[x] > 'z')
			return (0);
		x++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		printf("%i\n", ft_str_is_alpha(argv[i]));
		i++;
	}
}*/
