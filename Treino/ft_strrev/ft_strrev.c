/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:24:39 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/13 21:32:27 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

void	ft_swap(char *a, char *b)
{
	char	x;

	x = *a;
	*a = *b;
	*b = x;
}

char	*ft_strrev(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(str);
	while (i < j / 2)
	{
		ft_swap(&str[i], &str[j - 1 - i]);
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		printf("%s\n", ft_strrev(argv[i]));
		i++;
	}
}
