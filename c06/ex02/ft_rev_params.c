/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 15:44:06 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/07 15:50:03 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *a)
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

	i = argc - 1;
	while (i > 0)
	{
		ft_rev_params(argv[i]);
		write(1, "\n", 1);
		i--;
	}
}
