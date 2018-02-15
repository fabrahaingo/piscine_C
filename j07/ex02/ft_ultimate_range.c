/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 14:29:19 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/16 22:19:58 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int j;

	if (min >= max)
	{
		range = 0;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	i = 0;
	j = min;
	while (min < max)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (max - j);
}
