/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:15:32 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/12 19:02:45 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_search_and_replace(char *str, char *out, char *in)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == out[0])
			str[i] = in[0];
		i++;
	}
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	if (argc == 4 && ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1)
		ft_search_and_replace(argv[1], argv[2], argv[3]);
	write(1, "\n", 1);
	return (0);
}
