/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 16:17:33 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/08 11:56:46 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;

	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	else
		while (power > 0)
		{
			result = result * nb;
			power--;
		}
	return (result);
}
