/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 15:31:21 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/11 19:14:23 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	int	size;
	int	i;
	int	*range = NULL;

	(void)argc;
	size = atoi(argv[2]) - atoi(argv[1]);
	ft_ultimate_range(&range, atoi(argv[1]), atoi(argv[2]));
	i = 0;
	while (i < size)
	{
		printf("%i\n", range[i]);
		i++;
	}
}*/
