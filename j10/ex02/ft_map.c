/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 17:49:53 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/23 09:18:05 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *clone;

	i = 0;
	clone = (int*)malloc(sizeof(int) * length);
	while (i < length)
	{
		clone[i] = f(tab[i]);
		i++;
	}
	return (clone);
}
