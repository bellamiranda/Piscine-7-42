/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 19:47:10 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/13 20:04:50 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_strlen(char *a)
{
	char	i;

	i = 0;
	while (a[i])
		i++;
	return(i);
}

char	*ft_rev_print(char *str)
{
	char	i;
	
	i = ft_strlen(str);
	while (i > 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (str);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_rev_print(argv[i]);
		i++;
	}
}
