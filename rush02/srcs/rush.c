/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 09:23:46 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/20 23:10:57 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		ft_putchar(char c);

void	print_corners(int i, int j, int y, char top, char bot, int k, char **rushtab)
{
	if (j == 0)
		rushtab[j][i] = top;
	else if (j == y - 1)
		rushtab[j][i] = bot;
	else
		rushtab[j][i] = g_tab[k].line;
}

char	**rush(int nbrush, int x, int y, char **rushtab)
{
	int i;
	int j;
	int	k;

	j = 0;
	k = 0;
	while (g_tab[k].nb_rush != nbrush)
		k++;
	while (j < y)
	{
		i = 0;
		print_corners(i, j, y, g_tab[k].topleft, g_tab[k].botleft, k, rushtab);
		i++;
		while (i < (x - 1))
		{
			if (j == 0 || j == (y - 1))
				rushtab[j][i] = g_tab[k].wide;
			else
				rushtab[j][i] = ' ';
			i = i + 1;
		}
		if (x > 1)
			print_corners(i, j, y, g_tab[k].toprght, g_tab[k].botrght, k, rushtab);
		rushtab[j][++i] = '\0';
		j = j + 1;
	}
	rushtab[y] = 0;
	return (rushtab);
}
