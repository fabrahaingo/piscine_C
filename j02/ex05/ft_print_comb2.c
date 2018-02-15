/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 14:23:02 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/05 17:54:44 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		*ft_loop_cool(char *tab)
{
	int numero_case;

	numero_case = 3;
	while (numero_case >= 1)
	{
		if (tab[numero_case] > 9)
		{
			tab[numero_case - 1]++;
			tab[numero_case] = 0;
		}
		numero_case--;
	}
	return (0);
}

void	ft_print_comb2(void)
{
	char tab[4];

	tab[0] = 0;
	tab[1] = 0;
	tab[2] = 0;
	tab[3] = 0;
	while (tab[0] <= 9)
	{
		if ((tab[0] * 10 + tab[1]) < (tab[2] * 10 + tab[3]))
		{
			ft_putchar(tab[0] + 48);
			ft_putchar(tab[1] + 48);
			ft_putchar(' ');
			ft_putchar(tab[2] + 48);
			ft_putchar(tab[3] + 48);
			if ((tab[0] * 10 + tab[1]) < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		tab[3]++;
		ft_loop_cool(tab);
	}
}
