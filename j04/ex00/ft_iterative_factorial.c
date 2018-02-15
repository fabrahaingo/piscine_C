/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 13:27:08 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/08 18:20:39 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int result;
	int compteur;

	compteur = 1;
	result = nb;
	if (nb > 0)
		while (compteur < nb)
		{
			result = result * compteur;
			compteur++;
		}
	else if (nb < 0)
		result = 0;
	else
		return (1);
	return (result);
}
