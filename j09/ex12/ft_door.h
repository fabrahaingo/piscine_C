/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 12:39:06 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/11 13:23:09 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct	s_door
{
	int OPEN;
	int CLOSE;
	int TRUE;
	int FALSE;
	int state;

	OPEN = 1;
	CLOSE = 0;
	TRUE = 1;
	FALSE = 0;
	state = 0;
}				t_door;
