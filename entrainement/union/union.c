/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 15:51:07 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/24 18:33:01 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	word_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;	
	}
	return (i);
}

int	is_double(char c, char *str)
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

int	main(int argc, char **argv)
{
	int i;
	int j;
	char *result;

	i = 0;
	j = 0;
	result = (char*)malloc(sizeof(char) * (word_len(argv[1]) + word_len(argv[2])));
	if (argc != 3)
	{
		ft_putchar('\n');
		return (0);
	}
	while (argv[1][i])
	{
		if (is_double(argv[1][i], result) == 0)
		{
			result[j] = argv[1][i];	
			ft_putchar(argv[1][i]);
			j++;
		}
		i++;
	}
	i = 0;
	if (argv[2][i])
		while (argv[2][i])
		{
			if ((is_double(argv[2][i], result) == 0) && (is_double(argv[2][i], argv[1]) == 0))
			{
				result[j] = argv[2][i];
				ft_putchar(argv[2][i]);
				j++;
			}
			i++;
		}
	ft_putchar('\n');
	return (0);
}
