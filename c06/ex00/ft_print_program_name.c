/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:42:58 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/09 16:43:37 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *a)
{
	int	i;

	i = 0;
	while (a[i] != '\0')
	{
		write(1, &a[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	(void) argc;
	ft_print_program_name(argv[0]);
}
