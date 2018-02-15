/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 15:31:12 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/10 10:43:16 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int length;

	i = 0;
	j = 0;
	length = 0;
	while (to_find[length] != '\0')
		length++;
	if (length == 0)
		return (str);
	while (str[j] != '\0')
	{
		while (to_find[i] == str[j + i])
		{
			if (i == length - 1)
				return (str + j);
			i++;
		}
		i = 0;
		j++;
	}
	return (0);
}
