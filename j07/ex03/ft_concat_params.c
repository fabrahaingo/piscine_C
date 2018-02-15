/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 15:31:49 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/17 19:08:47 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_counter(int argc, char **argv)
{
	int z;
	int j;
	int i;

	z = 1;
	j = 0;
	i = 0;
	while (z < argc)
	{
		while (argv[z][j])
		{
			i++;
			j++;
		}
		j = 0;
		z++;
	}
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		z;

	i = 0;
	j = 0;
	z = 1;
	str = malloc(sizeof(char) * ft_counter(argc, argv) + 1);
	while (z < argc)
	{
		while (argv[z][j])
			str[i++] = argv[z][j++];
		if (z != argc - 1)
			str[i] = '\n';
		z++;
		i++;
		j = 0;
	}
	str[i] = '\0';
	return (str);
}
