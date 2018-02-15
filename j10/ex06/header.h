/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 15:48:13 by frahaing          #+#    #+#             */
/*   Updated: 2017/08/21 15:48:17 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include <unistd.h>
# include <stdio.h>

void	ft_putchar(char c);
int		ft_atoi(char *str);
int		forbidden(char **str);
int		ft_strcmp(char *s1, char *s2);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
int		ft_multiplication(int x, int y);
int		ft_division(int x, int y);
int		ft_addition(int x, int y);
int		ft_subtraction(int x, int y);
int		ft_modulo(int x, int y);
int		ft_reduction(char **str);

#endif
