/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:24:30 by ismirand          #+#    #+#             */
/*   Updated: 2023/08/29 12:11:00 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (*str != '\0')
	{
		str = str + 1;
		x++;
	}
	return (x);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*s;
	int	a;

	s = "Tais a ver?";
	a = ft_strlen(s);
	printf("%i", a);
}
*/
