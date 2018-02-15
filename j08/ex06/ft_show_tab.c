/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 22:31:57 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/19 09:34:13 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putnbr(int nb)
{
	int temporaire;
	int longueur;

	if (nb > 0)
		nb = -nb;
	else if (nb == 0)
		ft_putchar('0');
	else
		ft_putchar('-');
	temporaire = nb;
	longueur = -1;
	while ((temporaire / 10) < 0)
	{
		longueur = longueur * 10;
		temporaire = temporaire / 10;
	}
	temporaire = nb;
	if (nb != 0)
		while (longueur != 0)
		{
			ft_putchar((temporaire / longueur) + '0');
			temporaire = temporaire % longueur;
			longueur = longueur / 10;
		}
}

void	ft_putstr(char *str)
{
	int lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		ft_putchar(str[lenght]);
		lenght++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[i].tab);
		i++;
	}
}
