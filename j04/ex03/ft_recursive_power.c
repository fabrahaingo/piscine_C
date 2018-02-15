/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 16:34:15 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/08 11:16:36 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power > 0)
	{
		nb = nb * (ft_recursive_power(nb, power - 1));
		return (nb);
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}
