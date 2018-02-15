/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/23 16:54:50 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/23 16:54:52 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
t_list	*ft_create_elem(void *data)
{
	t_list *init;
	init = (t_list*)malloc(sizeof(*init));
	init->data = data;
	init->next = NULL;
	return (init);
}

typedef struct	s_list
{
	struct s_list		*next;
	void						*data;
}								t_list;

#endif
