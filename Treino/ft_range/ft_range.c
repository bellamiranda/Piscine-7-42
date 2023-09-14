/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:44:45 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/13 18:11:04 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	range;
	int	i;
	int	*dest;

	if (end > start)
		range = end - start + 1;
	if (end < start)
		range = -(end - start) + 1;
	dest = (int *) malloc(sizeof(int) * range);
	i = 0;
	while (i < range)
	{
		if (end > start)
			dest[i] = start + i;
		if (end < start)
			dest[i] = start - i;
		i++;
	}
	return (dest);
}

int	main(void)
{
	int	i;
	int	start;
	int	end;
	int	range;
	int	*dest;

	start = 0;
	end = -3;
	range = 4;
	dest = ft_range(start, end);
	i = 0;
	while (i < range)
	{
		printf("%i, ", dest[i]);
		i++;
	}
}
