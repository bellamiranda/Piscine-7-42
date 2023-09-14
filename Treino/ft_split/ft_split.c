/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:15:24 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/14 18:27:16 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strncpy(char *a, char *b, int k)
{
	int	i;

	i = 0;
	while (i < k)
	{
		a[i] = b[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}

char	**ft_split(char *str)
{
	char	i;
	char	j;
	char	k;
	char	**dest;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ((str[i] > 32 && str[i] < 127) && 
			(str[i + 1] == 32 || str[i + 1] == 9 || str[i + 1] == 10 || str[i + 1] == 0))
			j++;
		i++;
	}
	dest = (char **) malloc(sizeof(char *) * j + 1);
	i = 0;
	j = 0;
	while (str[i])
	{
		k = 0;
		while (str[i] > 32 && str[i] < 127)
		{
			i++;
			k++;
		}
		dest[j] = (char *) malloc(sizeof(char) * k + 1);
		dest[j] = ft_strncpy(dest[j], &str[i - k], k);
		printf("%p\n", dest[j]);
		j++;
		while (!(str[i] > 32 && str[i] < 127))
			i++;
	}
	dest[j] = 0;
	return (dest);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	char **dest;

	i = 0;
	if (argc == 2)
		dest = ft_split(argv[1]);
	while (dest[i] != 0)
	{
		j = 0;
		while (dest[i][j] != '\0')
		{
			write(1, &dest[i][j], 1);
			j++;
		}
		free (dest[i]);
		write(1, ", ", 2);
		i++;
	}
	write(1, "\n", 1);
	free (dest);
}
