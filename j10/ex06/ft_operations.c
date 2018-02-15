/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 16:23:47 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/21 16:23:50 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_multiplication(int x, int y)
{
	int i;

	i = x * y;
	return (i);
}

int		ft_division(int x, int y)
{
	int i;

	i = x / y;
	return (i);
}

int		ft_addition(int x, int y)
{
	int i;

	i = x + y;
	return (i);
}

int		ft_subtraction(int x, int y)
{
	int i;

	i = x - y;
	return (i);
}

int		ft_modulo(int x, int y)
{
	int i;

	i = x % y;
	return (i);
}
