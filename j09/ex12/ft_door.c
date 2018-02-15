/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 12:19:39 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/11 13:23:06 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_door.h"

void	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		write(1, str, i);
}

void	ft_bool open_door(t_door *door)
{
	ft_putstr('Door opening...');
	state = OPEN;
}

void	ft_bool close_door(t_door *door)
{
	ft_putstr(’Door closing...’);
	state = CLOSE;
	return (TRUE);
}

void	is_door_open(t_door door)
{
	ft_putstr("Door is open ?");
	return (door->state = OPEN);
}

int		ft_bool is_door_close(t_door* door)
{
	ft_putstr("Door is close ?");
	return (door->state = CLOSE);
}
