/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fgiverna <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 12:05:38 by fgiverna          #+#    #+#             */
/*   Updated: 2017/08/20 12:57:18 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		get_pow(int n)
{
	int	pw;

	pw = 1;
	while (n >= 10)
	{
		n = n / 10;
		pw = pw * 10;
	}
	return (pw);
}

void	ft_putnbr(int nb)
{
	int	pw;
	int	tmp;

	if (nb == -2147483648)
		ft_putstr("-2147483648");
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb = -nb;
		}
		pw = get_pow(nb);
		while (pw != 0)
		{
			tmp = nb / pw;
			ft_putchar('0' + tmp);
			nb = nb % pw;
			pw = pw / 10;
		}
	}
}
