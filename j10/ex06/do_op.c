/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 16:15:37 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/21 16:15:39 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int result;
	int (*add)(int x, int y);

	add = &ft_addition;
	result = 0;
	if (argc != 4)
		return (0);
	else if (argc == 4)
	{
		if ((forbidden(argv)) == 0)
			return (0);
		if (ft_strcmp("+", argv[2]) == 0)
			result = add(ft_atoi(argv[1]), ft_atoi(argv[3]));
		else
			result = ft_reduction(argv);
	}
	ft_putnbr(result);
	ft_putchar('\n');
	return (0);
}
