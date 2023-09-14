/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:50:33 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/09 20:21:23 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *a, char *b)
{
	int	i;

	i = 0;
	while (a[i] != '\0' || b[i] != '\0')
	{
		if (a[i] == b[i])
			i++;
		if (a[i] > b[i])
			return (1);
		if (a[i] < b[i])
			return (-1);
	}
	return (0);
}

void	ft_putstr(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		write(1, &a[i], 1);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char	*x;

	x = *a;
	*a = *b;
	*b = x;
}

void	ft_sort_params(int argc, char **argv)
{
	int	i;
	int	k;

	i = 1;
	while (i < argc - 1)
	{
		k = ft_strcmp(argv[i], argv[i + 1]);
		if (k == 1)
		{
			ft_swap(&argv[i], &argv[i + 1]);
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	ft_sort_params(argc, argv);
}
