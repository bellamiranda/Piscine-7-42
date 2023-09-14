/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismirand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:15:24 by ismirand          #+#    #+#             */
/*   Updated: 2023/09/13 19:39:09 by ismirand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split(char *str)
{
	char	i;
	char	j;
	char	k;
	char	**dest;

	i = 0;
	while (str[i])
	{
		if ((str[i] > 32 && str[i] < 127) && 
			(str[i + 1] == 32 || str[i + 1] == 9 || str[i + 1] == 10 || str[i + 1] == 0))
			j++;
		i++;
	}
	dest = (char **) malloc(sizeof(char *) * j + 1) //para o null
	i = 0;
	k = 0;
	while (*str)
	{
		if (str[0] > 32 && str[0] < 127)
		{
			i++;
			str++;
		}
		dest[k] = (char *) malloc(sizeof(char) * i + 1);
		
		while (str[0] == 32 || str[0] == 9 || str[0] == 10)
			str++;
		i = 0;
		k++;
	}
}

/*while pra quantidade de palavras
  conta tamanho de cada e faz malloc
  copia cada uma pro dest[i][j] + NUL
