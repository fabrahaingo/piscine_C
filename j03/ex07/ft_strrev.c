/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 16:31:53 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/06 21:39:17 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		length;
	int		counter_end;
	char	substitute;

	length = 0;
	counter_end = 0;
	while (str[length] != '\0')
		length++;
	length--;
	while (length > counter_end)
	{
		substitute = str[length];
		str[length] = str[counter_end];
		str[counter_end] = substitute;
		length--;
		counter_end++;
	}
	return (str);
}
