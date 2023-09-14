/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:34:12 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/13 22:40:37 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_double(char *a, char c, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		if (a[i] == c)
			return (0);
		i++;
	}
	return (1);//se nao tiver nada igual antes
}

void	ft_inter(char *a, char *b)
{
	int	i;
	int	j;

	i = 0;
	while (a[i])
	{
		if (ft_double(a, a[i], i) == 1)
		{	
			j = 0;
			while (b[j])
			{
				if (a[i] == b[j])
				{
					write(1, &a[i], 1);
					break;
				}
				j++;
			}
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
}
