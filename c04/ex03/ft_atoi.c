/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 12:21:53 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/07 21:52:03 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			k = k * (-1);
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		j = j * 10 + str[i] - '0';
		i++;
	}
	return (j * k);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	a[] = "   ---+--+1234ab567";

	printf("Minha funcao: %d\n", ft_atoi(a));
	printf("Atoi: %i\n", atoi(a));//nao funciona igual, so aceita um sinal
}*/
