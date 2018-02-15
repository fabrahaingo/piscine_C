/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/06 15:18:26 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/06 15:45:51 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int lenght;

	lenght = 0;
	while (str[lenght] != '\0')
	{
		ft_putchar(str[lenght]);
		lenght++;
	}
}
