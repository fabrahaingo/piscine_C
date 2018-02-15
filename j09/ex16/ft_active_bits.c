/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 13:32:40 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/11 14:35:58 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	int bit;

	bit = 0;
	if (value == 0)
		return (0);
	if (value < 0)
		bit++;
	while (value != 0)
	{
		if (value % 2 == 1 || value % 2 == -1)
		{
			bit++;
		}
		value = value / 2;
	}
	return (bit);
}
