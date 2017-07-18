/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 21:47:45 by laube             #+#    #+#             */
/*   Updated: 2017/07/09 14:30:49 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDO_H
#define SUDO_H

#include <unistd.h>

extern int counter;
int	ft_error(int argc, char **argv);
void	print_sud(char **puzz);
int	puzz_done(void);
int puzz_solver(char ***puzz_ptr, int row, int col);
int	valid_num(char **puzz, int num, int row, int col);
int	next_case(char ***puzz_str, int row, int col);


#endif
