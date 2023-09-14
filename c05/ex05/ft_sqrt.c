/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:36:50 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/09 19:12:13 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i < nb && i <= 46340)
		i++;
	if (nb == i * i)
		return (i);
	return (0);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{
	int	i;

	scanf("%i", &i);
	printf("%i\n", ft_sqrt(i));
}*/
