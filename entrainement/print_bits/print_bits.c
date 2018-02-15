/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/24 11:20:35 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/24 22:22:54 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int tab[8];
	int i;
	int count;

	i = 0;
	count = 0;
	while (count < 8)
	{
		tab[count] = octet % 2;
		octet = octet / 2;
		count++;
	}
	while ((count - 1) >= 0)
	{
		i = tab[count - 1] + 48;
		ft_putchar(i);
		count--;
	}
	ft_putchar('\n');
}

int	main()
{
	print_bits(100);
	return (0);
}
