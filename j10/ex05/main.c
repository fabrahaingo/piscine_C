/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/20 18:03:38 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/23 17:09:25 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int	ft_test(int i, int y)
{
	if (i < y)
		return (-1);
	if (i == y)
		return (0);
	if (i > y)
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	int	tab1[4] = {2, 10, 78, 7};
	int	tab2[4] = {2, 4, 5, 7};
	int	tab3[4] = {(5),(-2 + 10), 15, 20};
	int	tab4[4] = {1, 1, 2, 2};
	int	tab5[4] = {0, 0, 0, 0};

	if (argc == 2)
	{
		if (argv[1][0] == '1')
			printf("%d", ft_is_sort(tab1, 4, (&ft_test)));
		if (argv[1][0] == '2')
			printf("%d", ft_is_sort(tab2, 4, (&ft_test)));
		if (argv[1][0] == '3')
			printf("%d", ft_is_sort(tab3, 4, (&ft_test)));
		if (argv[1][0] == '4')
			printf("%d", ft_is_sort(tab4, 4, (&ft_test)));
		if (argv[1][0] == '5')
			printf("%d", ft_is_sort(tab5, 4, (&ft_test)));
	}
	return (0);
}
