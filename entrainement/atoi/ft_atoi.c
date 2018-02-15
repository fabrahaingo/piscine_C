/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 18:02:34 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/24 18:28:59 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int tmp;

	i = 0;
	tmp = 1;
	nb = 0;
	while (str[i] < 33)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			tmp = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb * tmp);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("Mienne : %d\n", ft_atoi(argv[1]));
	printf("Vraie : %d\n", atoi(argv[1]));
	return (0);
}
