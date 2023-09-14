/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 16:40:40 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/02 16:25:26 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_strhexa(int x)
{
	char	*a;

	a = "0123456789abcdef";
	return (a[x]);
}

void	ft_putstr_non_printable(char *str)
{
	int	x;
	int	y;
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			write(1, "\\", 1);
			x = str[i] / 16;
			y = str[i] % 16;
			x = ft_strhexa(x);
			y = ft_strhexa(y);
			write(1, &x, 1);
			write(1, &y, 1);
		}
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	ft_putstr_non_printable("Como\n vai?");
}
