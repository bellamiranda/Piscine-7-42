/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:03:09 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/11 19:15:07 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	range;
	int	i;

	i = 0;
	range = max - min;
	dest = (int *) malloc (sizeof(int) * range);
	if (dest == NULL || min >= max)
		return (NULL);
	while (i < range)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	int	*a;
	int	range;

	i = 0;
	range = atoi(argv[2]) - atoi(argv[1]);
	if (argc == 3)
	{
		a = ft_range(atoi(argv[1]), atoi(argv[2]));
		while (i < range)
		{
			printf("%i\n", a[i]);
			i++;
		}
	}
}*/
