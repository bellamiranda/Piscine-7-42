/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paulodos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:21:47 by paulodos          #+#    #+#             */
/*   Updated: 2023/09/11 19:00:53 by paulodos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

void	ft_show_tab(struct s_stock_str *par);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i] != '\0')
		i++;
	dest = malloc(sizeof(char) * i + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	s_stock_str	*tab;
	int			i;

	tab = malloc(sizeof(s_stock_str) * (ac + 1));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}

#include <stdio.h>

int	main(void)
{
	char	*strs[4];
	char	*str0;
	char	*str1;
	char	*str2;
	char	*str3;
	int		size;

	str0 = "Palavra0";
	str1 = "Escola";
	str2 = "42";
	str3 = "Porto";
	size = 4;
	strs[0] = str0;
	strs[1] = str1;
	strs[2] = str2;
	strs[3] = str3;
	ft_show_tab(ft_strs_to_tab(size, strs));
	return (0);
}
