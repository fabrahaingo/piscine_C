/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 22:30:12 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/05 17:29:45 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		*ft_print_numbers(int *tab)
{
	if ((tab[0] < tab[1]) && (tab[1] < tab[2]))
	{
		ft_putchar(tab[0]);
		ft_putchar(tab[1]);
		ft_putchar(tab[2]);
		if (tab[0] < 55)
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
	return (0);
}

void	ft_print_comb(void)
{
	int tab[3];

	tab[0] = 48;
	tab[1] = 48;
	tab[2] = 48;
	while (tab[0] < 57)
	{
		ft_print_numbers(tab);
		tab[2]++;
		if (tab[2] >= 58)
		{
			tab[2] = 48;
			tab[1]++;
		}
		if (tab[1] >= 58)
		{
			tab[1] = 48;
			tab[0]++;
		}
	}
}
