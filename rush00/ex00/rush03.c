/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hayed <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 15:51:50 by hayed             #+#    #+#             */
/*   Updated: 2017/08/06 14:53:42 by hayed            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_start_end(int width, int column)
{
	width = 0;
	ft_putchar('A');
	while (width < column - 2)
	{
		ft_putchar('B');
		width++;
	}
	if (column > 1)
		ft_putchar('C');
	ft_putchar('\n');
	return (0);
}

int		ft_heart(int repeat, int nb_spaces, int column, int line)
{
	nb_spaces = 0;
	repeat = 0;
	while (repeat < line - 2)
	{
		ft_putchar('B');
		while (nb_spaces < column - 2)
		{
			ft_putchar(' ');
			nb_spaces++;
		}
		nb_spaces = 0;
		if (column > 1)
			ft_putchar('B');
		ft_putchar('\n');
		repeat++;
	}
	return (0);
}

int		rush(int column, int line)
{
	int width;
	int nb_spaces;
	int repeat;

	if (column > 0 && line > 0)
	{
		ft_start_end(width, column);
		ft_heart(repeat, nb_spaces, column, line);
		if (line > 1)
			ft_start_end(width, column);
	}
	ft_putchar('\0');
	return (0);
}
