/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 12:05:46 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/24 13:30:08 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_is_delim(char c)
{
	if (c < 33)
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
	while (argv[1][i])
	{
		if (ft_is_delim(argv[1][i]) == 1)
		{
			ft_putchar(argv[1][i]);
			i++;
		}
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
		{
			if (argv[1][i] >= 'k')
			{
				ft_putchar(argv[1][i] - 12);
				i++;
			}
			else
			{
				ft_putchar(argv[1][i] + 13);
				i++;
			}
		}
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
		{
			if (argv[1][i] >= 'K')
			{
				ft_putchar(argv[1][i] - 12);
				i++;
			}
			else
			{
				ft_putchar(argv[1][i] + 13);
				i++;
			}
		}
		i = 0;
		argv[1]++;
	}
	ft_putchar('\n');
	return (0);
}
