/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:37:30 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/07 15:42:41 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		write(1, &a[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_print_params(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
