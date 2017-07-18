/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_file.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 23:54:56 by laube             #+#    #+#             */
/*   Updated: 2017/07/16 21:11:22 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_FILE_H
# define MY_FILE_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
int		get_number(char **str);
int		get_product(char **str);
int		get_sum(char **str);
int		ft_atoi(char **str);
int		ft_is_whitespace(char c);
void	ft_putnbr(int nb);
int		eval_expr(char *str);

#endif
