/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 22:08:18 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/07 15:42:28 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int length;
	int result;
	int negative;

	result = 0;
	length = 0;
	negative = 1;
	while ((str[length] == '\t') || (str[length] == ' ')
			|| (str[length] == '\n') || (str[length] == '\f'))
		length++;
	if (str[length] == '-')
		negative++;
	if ((str[length] == '-') || (str[length] == '+'))
		length++;
	while (str[length] >= '0' && str[length] <= '9')
	{
		result = result * 10;
		result = result + (str[length] - 48);
		length++;
	}
	if (negative == 2)
		negative = (-negative) + 1;
	return (result * negative);
}
