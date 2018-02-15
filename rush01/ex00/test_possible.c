/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_possible.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 16:57:13 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/12 19:14:51 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_line(int **grid, int nb, int x)
{
	int y;

	y = 0;
	if (nb >= 0 && nb <= 9)
	{
		while (grid[x][y])
		{
			if (grid[x][y] == nb)
				return (0);
			y++;
		}
		return (1);
	}
	else
		return (0);
}

int		check_column(int **grid, int nb, int y)
{
	int x;

	x = 0;
	if (nb >= 0 && nb <= 9)
	{
		while (x <= 8)
		{
			if (grid[x][y] == nb)
				return (0);
			x++;
		}
		return (1);
	}
	else
		return (0);
}

int		check_square(int **grid, int nb, int x, int y)
{
	int i;
	int j;

	x = x - (x % 3);
	y = y - (y % 3);
	i = 0;
	j = 0;
	while (i < 3)
	{
		while (j < 3)
		{
			if (grid[x + i][y + j] == nb)
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
