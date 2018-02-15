/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 16:14:12 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/23 09:49:13 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int		length;
	int		i;
	char	*temp;

	temp = 0;
	i = 0;
	while (tab[i] != 0)
		i++;
	length = i - 1;
	i = 0;
	while (i < length)
	{
		if (cmp(tab[i], tab[i + 1]) > 0)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			if (i != 0)
				i--;
		}
		else
			i++;
		}
}
