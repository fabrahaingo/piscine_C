/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 13:32:13 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/08 13:35:39 by frahaing         ###   ########.fr       */
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
