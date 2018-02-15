/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 19:52:43 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/24 21:51:45 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		max(int *tab, unsigned int len)
{
	int clone;
	unsigned int i;

	clone = 0;
	i = 0;
	if (tab[i] == '\0')
		return (0);
	while (tab[i])
	{
		if (tab[i] > clone)
			clone = tab[i];
		i++;
	}
	return (clone);
}
