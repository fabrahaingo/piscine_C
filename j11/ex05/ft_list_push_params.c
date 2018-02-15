/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 16:55:05 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/23 16:55:07 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *entry;

	while (i < ac)
	{
		entry = *ft_create_elem(av[ac]);
	 	entry = (t_list*)malloc(sizeof(char**) * t_len(av[ac]));
		entry->data = av[ac];
		entry->next = (ft_list_push_params(ac - 1, av));
	}
	return (&entry);
}
