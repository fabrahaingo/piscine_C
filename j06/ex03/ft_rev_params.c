/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 15:22:02 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/13 23:29:28 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int c;

	c = 0;
	while (argc > 1)
	{
		while (argv[argc - 1][c] != '\0')
		{
			ft_putchar(argv[argc - 1][c]);
			c++;
		}
		ft_putchar('\n');
		c = 0;
		argc--;
	}
	return (0);
}
