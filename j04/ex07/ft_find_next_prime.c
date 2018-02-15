/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 09:42:34 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/08 18:27:20 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_test_prime(int nb)
{
	int test;

	test = 2;
	while (test < nb)
	{
		if (nb % test == 0)
			return (0);
		test++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (ft_test_prime(nb) != 1)
		nb++;
	return (nb);
}
