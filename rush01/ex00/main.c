/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 14:07:58 by laube             #+#    #+#             */
/*   Updated: 2017/07/09 14:48:57 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudo.h"
#include <unistd.h>
#include <stdio.h>

int counter = 0;

int	main(int argc, char **argv)
{

	if (ft_error(argc, argv) == 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	puzz_solver(&argv, 0, 0);

	if (counter != 1){
		printf("%d\n", counter);
		write(1, "To Err\n", 6);
	}
	else
	{
		counter = -1;
		puzz_solver(&argv, 0, 0);
		print_sud(argv);
	}
	return (0);
}

int	valid_num(char **puzz, int num, int row, int col)
{
	int i;
	int nonet_row;
	int nonet_col;

	nonet_row = 3*(row/3);
	nonet_col = 3*(col/3);
	i = 1;
	while (i < 9)
	{
		if (puzz[i][col] == num)
			return (0);
		if (puzz[row][i] == num)
			return (0);
		i++;
	}
	if (puzz[((row + 2) % 3) + nonet_row][((col + 2) % 3) + nonet_col] == num)
		return (0);
	if (puzz[((row + 4) % 3) + nonet_row][((col + 2) % 3) + nonet_col] == num)
		return (0);
	if (puzz[((row + 2) % 3) + nonet_row][((col + 4) % 3) + nonet_col] == num)
		return (0);
	if (puzz[((row + 4) % 3) + nonet_row][((col + 4) % 3) + nonet_col] == num)
		return (0);
	return (1);
}
