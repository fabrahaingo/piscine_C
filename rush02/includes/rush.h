/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 13:53:56 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/22 10:19:03 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

typedef struct	s_rush
{
	char	topleft;
	char	toprght;
	char	botleft;
	char	botrght;
	char	wide;
	char	line;
	int		nb_rush;
}				t_rush;

extern t_rush g_tab[5];

char	**generate_rush(int nbrush, int x, int y);

#endif
