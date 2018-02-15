/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 20:55:30 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/23 20:55:31 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;
	if (begin_list == NULL)
		return ;
	while (*begin_list)
	{
		tmp = *begin_list;
		*begin_list = *begin_list->next;
		free(tmp);
	}
}
