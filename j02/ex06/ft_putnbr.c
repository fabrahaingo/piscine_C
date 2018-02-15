/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 14:32:01 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/06 10:23:47 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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
