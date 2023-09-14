/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 11:17:23 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/06 13:45:43 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		printf("%i\n", ft_strlen(argv[i]));
		i++;
	}
}*/
