/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 22:26:29 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/24 23:14:46 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		addition(int a, int b)
{
	return (a + b);
}

int		division(int a, int b)
{
	return (a / b);
}

int		soustraction(int a, int b)
{
	return (a - b);
}

int		multiplication(int a, int b)
{
	return (a * b);
}

int		modulo(int a, int b)
{
	return (a % b);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int tmp;
	int nb;

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
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb * tmp);
}

int		main(int argc, char **argv)
{
	int i;
	int result;

	i = 0;
	result = 0;
	if (argc != 4)
	{
		printf("\n");
		return (0);
	}
	if (ft_strcmp(argv[2], "+") == 0)
		result = addition(ft_atoi(argv[1]), ft_atoi(argv[3]));
	if (ft_strcmp(argv[2], "/") == 0)
		result = division(ft_atoi(argv[1]), ft_atoi(argv[3]));
	if (ft_strcmp(argv[2], "*") == 0)
		result = multiplication(ft_atoi(argv[1]), ft_atoi(argv[3]));
	if (ft_strcmp(argv[2], "-") == 0)
		result = soustraction(ft_atoi(argv[1]), ft_atoi(argv[3]));	
	if (ft_strcmp(argv[2], "%") == 0)
		result = modulo(ft_atoi(argv[1]), ft_atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
