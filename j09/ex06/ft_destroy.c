/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/10 23:58:55 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/11 14:39:31 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_destroy(char ***factory)
{
	while (**factory)
		free(**factory++);
	while (*factory)
		free(*factory++);
	while (factory)
		free(factory++);
}
