/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:33:59 by ismirand          #+#    #+#             */
/*   Updated: 2023/08/30 16:25:48 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, &str[0], 1);
		str++;
	}
}

int	main(void)
{
	char	*x;

	x = "Tais a ver?";
	ft_putstr(x);
	ft_putstr(x);
}

