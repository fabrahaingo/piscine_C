/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/12 18:43:01 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/12 20:30:58 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft.h"

void	ft_putchar(char c)
{
		write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int x;
	int y;
	int **grid;

	x = 0;
	y = 0;
	ft_start(argc, argv);
//	ft_heart(grid);
	while (x < 9)
	{
		while (y < 9)
		{
			ft_putchar(grid[x][y]);
			y++;
		}
		y = 0;
		x++;
	}
	return (0);
}
