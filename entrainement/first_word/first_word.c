/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 10:28:55 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/24 12:00:50 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_delim(char *str)
{
	int i;

	i = 0;
	if (str[i] < 33)
		return (1);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('\n');
		return (0);
	}
	while (ft_is_delim(&argv[1][i]) == 1)
	{
		i++;
		if ((argv[1][i]) == '\0')
		{
			ft_putchar('\n');
			return (0);
		}
	}
	while (ft_is_delim(&argv[1][i]) != 1)
	{
		ft_putchar(argv[1][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
