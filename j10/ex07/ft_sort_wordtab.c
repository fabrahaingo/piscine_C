/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 15:39:22 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/23 09:49:02 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	if (s1 == 0)
		return (-s2[0]);
	while (s1[count] != '\0')
	{
		if (s1[count] != s2[count])
			return (s1[count] - s2[count]);
		count++;
	}
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		lenght;
	int		i;
	char	*temp;

	i = 0;
	temp = 0;
	while (tab[i] != 0)
		i++;
	lenght = i - 1;
	i = 0;
	while (i < lenght)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
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
