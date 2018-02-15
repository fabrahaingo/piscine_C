/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_rush.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 13:08:05 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/20 23:10:43 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**rush(int nbrush, int x, int y, char **rushtab);

char **generate_rush(int nb_rush, int x, int y)
{
	int i;
	int j;
	char **resultrush;

	i = 0;
	j = 0;
	resultrush = (char **)malloc(sizeof(char*) * y + 1);
	while (i < y)
	{
		resultrush[i] = malloc(sizeof(char) * x + 1);
		i++;
	}
	resultrush = rush(nb_rush, x, y, resultrush);
	return (resultrush);
}
