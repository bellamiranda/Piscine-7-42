/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 17:10:18 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/11 18:57:31 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

char	*ft_strcat(int size, char *dest, char **strs, char *sep)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	a = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			dest[a++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i != (size - 1))
			dest[a++] = sep[j++];
		i++;
	}
	dest[a] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < size)
		j = j + ft_strlen(strs[i++]);
	j = j + ft_strlen(sep) * (size - 1);
	if (size <= 0)
		return (malloc(1));
	dest = (char *) malloc(sizeof(char) * j);
	if (dest == NULL)
		return (dest);//mudei o return, estava 0
	return (ft_strcat(size, dest, strs, sep));
}
/*
#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*j;

	i = 0;
	j = ft_strjoin((argc - 1), (argv + 1), ", ");
	while (j[i] != '\0')
	{
		write(1, &j[i], 1);
		i++;
	}
}*/
