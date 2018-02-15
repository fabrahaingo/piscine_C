/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 23:03:19 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/16 23:07:41 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strncpy(char *dest, char *str, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = str[i];
		i++;
	}
	return (dest);
}

int		ft_is_delim(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

int		count_char(char *str)
{
	int i;

	i = 0;
	while (ft_is_delim(str[i]) == 0 && str[i])
		i++;
	return (i);
}

int		count_words(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[j++])
		if (ft_is_delim(str[j]))
			i++;
	return (i);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	char	**dest;

	dest = (char **)malloc(sizeof(char**) * (count_words(str) + 1));
	i = 0;
	j = 0;
	while (ft_is_delim(str[i]))
		i++;
	while (str[i])
	{
		dest[j] = malloc(sizeof(char*) * count_char(str + i) + 1);
		ft_strncpy(dest[j], str + i, count_char(str + i));
		dest[j][count_char(str + i)] = '\0';
		i = i + count_char(str + i);
		j++;
		while (ft_is_delim(str[i]))
			i++;
	}
	dest[j] = 0;
	return (dest);
}