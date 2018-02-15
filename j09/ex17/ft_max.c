/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 13:59:33 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/11 14:28:00 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_max(int *tab, int length)
{
	int temp;

	temp = tab[length];
	while (length != 0)
	{
		if (tab[temp] > temp)
			temp = tab[temp];
		length--;
	}
	return (temp);
}
