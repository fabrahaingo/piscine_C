/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 13:32:04 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/24 15:50:15 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		is_double(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	char *result;

	i = 0;
	j = 0;
	result = (char*)malloc(sizeof(char) * 10000);
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i])
	{
		if (is_double(argv[1][i], argv[2]) == 1)
		{
			if (is_double((argv[1][i]), result) == 0)
			{
				result[j] = argv[1][i];
				ft_putchar(argv[1][i]);
				j++;
			}
		}
		i++;
	}
	ft_putchar('\n');
	return (0);
}
