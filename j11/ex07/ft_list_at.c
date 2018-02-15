/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 21:37:27 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/23 21:37:29 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list *tmp;
	unsigned int i;

	tmp = begin_list;
	if (tmp == NULL)
	{
		tmp = NULL;
		return (tmp);
	}
	i = 0;
	while (i != nbr)
	{
		if (tmp->next == NULL)
		{
			tmp = NULL;
			return (tmp);
		}
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
