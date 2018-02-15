/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reduction.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 11:55:53 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/22 11:55:55 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_reduction(char **str)
{
	int result;
	int (*div)(int x, int y);
	int (*mul)(int x, int y);
	int (*sub)(int x, int y);
	int (*mod)(int x, int y);

	div = &ft_division;
	mul = &ft_multiplication;
	sub = &ft_subtraction;
	mod = &ft_modulo;
	if (ft_strcmp("-", str[2]) == 0)
		result = sub(ft_atoi(str[1]), ft_atoi(str[3]));
	if (ft_strcmp("*", str[2]) == 0)
		result = mul(ft_atoi(str[1]), ft_atoi(str[3]));
	if (ft_strcmp("/", str[2]) == 0)
		result = div(ft_atoi(str[1]), ft_atoi(str[3]));
	if (ft_strcmp("%", str[2]) == 0)
		result = mod(ft_atoi(str[1]), ft_atoi(str[3]));
	return (result);
}
