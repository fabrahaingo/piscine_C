/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 21:05:37 by exam              #+#    #+#             */
/*   Updated: 2017/08/20 11:48:33 by fgiverna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		count_words(char *str)
{
	int	word;
	int	i;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while (str[i] == '\n')
			i++;
		if (!(str[i] == '\n') && str[i] != '\0')
		{
			while (!(str[i] == '\n') && str[i] != '\0')
				i++;
			word++;
		}
	}
	return (word);
}

char	**fill_tab(char **tab, char *str)
{
	int	word;
	int	j;
	int	i;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		while (str[i] == '\n')
			i++;
		if (!(str[i] == '\n') && str[i] != '\0')
		{
			j = 0;
			while (!(str[i] == '\n') && str[i] != '\0')
			{
				tab[word][j] = str[i];
				i++;
				j++;
			}
			tab[word++][j] = '\0';
		}
	}
	return (tab);
}

char	**make_tab(char **tab, int *word, char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char*) * count_words(str) + 1);
	while (str[i] != '\0')
	{
		while (str[i] == '\n')
			i++;
		if (!(str[i] == '\n')
			&& str[i] != '\0')
		{
			j = 0;
			while (!(str[i] == '\n') && str[i] != '\0')
			{
				i++;
				j++;
			}
			tab[*word] = (char *)malloc(sizeof(char) * j + 1);
			(*word)++;
		}
	}
	return (tab);
}

char	**ft_split_line(char *str)
{
	char	**tab;
	int		word;
	int		i;

	i = 0;
	word = 0;
	tab = 0;
	if (ft_strlen(str) != 0)
	{
		tab = make_tab(tab, &word, str);
		tab = fill_tab(tab, str);
		tab[word] = 0;
	}
	else
	{
		tab = (char**)malloc(sizeof(char*));
		tab[0] = 0;
	}
	return (tab);
}
