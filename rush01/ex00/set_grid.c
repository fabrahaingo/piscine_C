/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_grid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabreu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 14:23:46 by mabreu            #+#    #+#             */
/*   Updated: 2017/08/12 20:20:27 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_error(int argc, char **argv)
{
	int i;
	int a;

	i = 0;
	a = 0;
	if (argc != 10)
		write(1, "Error\n", 6);
	else
	{
		while (argc > 1)
		{
			while (argv[argc - 1][i] != '\0')
			{
				if (!(argv[argc - 1][i] == '.'
						|| (argv[argc - 1][i] >= '0'
						&& argv[argc - 1][i] <= '9')))
					write(1, "Error\n", 6);
				i++;
			}
			if (i != 9)
				write(1, "Error\n", 6);
			argc--;
		}
	}
	return (1);
}

int		set_zero(int argc, char **argv)
{
	int i;

	i = 0;
	if (check_error(argc, argv) != 1)
		return (0);
	while (argc > 1)
	{
		while (argv[argc - 1][i] != '\0')
		{
			if (argv[argc - 1][i] == '.')
				argv[argc - 1][i] = '0';
			i++;
		}
		i = 0;
		argc--;
	}
	return (**argv);
}

int		ft_start(int argc, char **argv)
{
	int i;
	int j;
	int grid[9][9];

	i = 0;
	j = 0;
	set_zero(argc, argv);
	while (argc > 1)
	{
		while (argv[argc - 1][i] != '\0')
		{
			grid[j][i] = argv[j + 1][i];
			i++;
		}
 		i = 0;
		argc--;
		j++;
	}
	return (1);
}
