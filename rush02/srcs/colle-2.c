/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 11:27:56 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/22 10:11:48 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "rush.h"
#include "output.h"

#define SIZE 1
#define LEN 128

char	**ft_split_line(char *str);

t_rush g_tab[5] =
{
	{'o', 'o', 'o', 'o', '-', '|', 0},
	{'/', '\\', '\\', '/', '*', '*', 1},
	{'A', 'A', 'C', 'C', 'B', 'B', 2},
	{'A', 'C', 'A', 'C', 'B', 'B', 3},
	{'A', 'C', 'C', 'A', 'B', 'B', 4}
};

int	ft_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


int		generate_and_compare(char **tab, int x, int y, int rushnb)
{
	char	**rush;
	int		i;
	int		line;

	i = 0;
	line = 0;
	rush = generate_rush(rushnb, x, y);
	while (tab[i] != 0 && rush[i] != 0)
	{
		if (strcmp(tab[i], rush[i]) == 0)
			line++;
		i++;
	}
	if (line == y)
		return (rushnb);
	return (-1);
}

void	print_rush(int t[5], int x, int y)
{
	int	i;
	int	p;

	i = 0;
	p = 0;
	while (i < 5)
	{
		if (t[i] != -1 && p == 0)
		{
			ft_putstr("[colle-0");
			ft_putnbr(t[i]);
			ft_putstr("] [");
			ft_putnbr(x);
			ft_putstr("] [");
			ft_putnbr(y);
			ft_putstr("]");
			p++;
		}
		else if (t[i] != -1 && p == 1)
		{
			ft_putstr(" || [colle-0");
			ft_putnbr(t[i]);
			ft_putstr("] [");
			ft_putnbr(x);
			ft_putstr("] [");
			ft_putnbr(y);
			ft_putstr("]");
		}
	i++;
	}
	ft_putchar('\n');
}

void	handle_errors(int t[5])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 5)
	{
		if (t[i] == -1)
			j++;
		i++;
	}
	if (j == 5)
		ft_putstr("aucune");
}

void	what_rush(char **tab, int x, int y)
{
	int	i;
	int	t[5];

	i = 0;
	while (i < 5)
		t[i++] = -1;
	i = 0;
	while (i < 5)
	{
		if (x == 1 && y == 1 && tab[0][0] == g_tab[i].topleft)
			t[i] = generate_and_compare(tab, x, y, g_tab[i].nb_rush);
		else if (x == 1 && y > 1 && tab[0][0] == g_tab[i].topleft
				&& tab[y - 1][0] == g_tab[i].botleft)
			t[i] = generate_and_compare(tab, x, y, g_tab[i].nb_rush);
		else if (y == 1 && x > 1 && tab[0][0] == g_tab[i].topleft
				&& tab[0][x - 1] == g_tab[i].toprght)
			t[i] = generate_and_compare(tab, x, y, g_tab[i].nb_rush);
		else if (tab[0][0] == g_tab[i].topleft && tab[0][x - 1] == g_tab[i].toprght
				&& tab[y - 1][0] == g_tab[i].botleft && tab[y - 1][x - 1] == g_tab[i].botrght)
			t[i] = generate_and_compare(tab, x, y, g_tab[i].nb_rush);
		i++;
	}
	handle_errors(t);
	print_rush(t, x, y);
}


char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i = i + 1;
	}
	while (i < n)
	dest[i++] = '\0';
	return (dest);
}

char *get_rush(char *str, char *tmp)
{
	int	i;
	int	j;

	i = 0;
	j = 2;
	while (read(0, str, SIZE) == SIZE)
	{
		if (i == LEN * (j - 1))
		{
			str = malloc(sizeof(char) * LEN * j + 1);
			str = ft_strncpy(str, tmp, (LEN * j) + 1);
			tmp = str;
			str = str + LEN * (j - 1);
			j++;
		}
		str++;
		i++;
	}
	return (tmp);
}

int	main()
{
	char	*str;
	char	*tmp;
	char	**tab;
	int		i;
	int		j;

	j = 2;
	i = 0;
	str = (char*)malloc(sizeof(char) * LEN + 1);
	while (i <= LEN)
		str[i++] = '\0';
	tmp = str;
	str = get_rush(str, tmp);
	tab = ft_split_line(str);
	i = 0;
	while (tab[i] != 0)
		i++;
	what_rush(tab, ft_length(tab[0]), i);
	return (0);
}
