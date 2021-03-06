/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 21:10:49 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/10 21:46:21 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'k' && str[i] <= 'z') ||
				(str[i] >= 'K' && str[i] <= 'Z'))
			str[i] = str[i] - 10;
		else if ((str[i] >= 'a' && str[i] <= 'j') ||
				(str[i] >= 'A' && str[i] <= 'J'))
			str[i] = str[i] + 16;
		i++;
	}
	return (str);
}
