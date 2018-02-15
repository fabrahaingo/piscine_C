/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   useful.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 15:47:43 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/21 15:47:45 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int i;
	int rslt;
	int neg;

	rslt = 0;
	i = 0;
	neg = 1;
	while ((str[i] == '\t') || (str[i] == ' ')
			|| (str[i] == '\n') || (str[i] == '\f'))
		i++;
	if (str[i] == '-')
		neg++;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		rslt = rslt * 10;
		rslt = rslt + (str[i] - 48);
		i++;
	}
	if (neg == 2)
		neg = (-neg) + 1;
	return (rslt * neg);
}

int		forbidden(char **str)
{
	if ((str[1][0] == '0' || str[3][0] == '0') && str[2][0] == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if ((str[1][0] == '0' || str[3][0] == '0') && str[2][0] == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	else if ((str[2][0] != '+' && str[2][0] != '-' && str[2][0] != '*' &&
		str[2][0] != '/' && str[2][0] != '%'))
	{
		ft_putstr("0\n");
		return (0);
	}
	else
		return (1);
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_putnbr(int nb)
{
	int tmp;
	int len;

	if (nb > 0)
		nb = -nb;
	else if (nb == 0)
		ft_putchar('0');
	else
		ft_putchar('-');
	tmp = nb;
	len = -1;
	while ((tmp / 10) < 0)
	{
		len = len * 10;
		tmp = tmp / 10;
	}
	tmp = nb;
	if (nb != 0)
		while (len != 0)
		{
			ft_putchar((tmp / len) + '0');
			tmp = tmp % len;
			len = len / 10;
		}
}
