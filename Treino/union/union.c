/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:14:00 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/13 22:51:01 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

char	*ft_strcat(char *a, char *b)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = ft_strlen(a);
	k = ft_strlen(b);
	while (i <= k)
	{
		a[j + i] = b[i];
		i++;
	}
	return (a);
}

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
	return (1);
}

void	ft_union(char *a, char *b)
{
	char *dest;
	int	i;

	dest = ft_strcat(a, b);
	i = 0;
	while (dest[i])
	{
		if (ft_double(dest, dest[i], i) == 1)
			write(1, &dest[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
}
