/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 21:59:51 by laube             #+#    #+#             */
/*   Updated: 2017/07/09 14:30:45 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudo.h"
#include <unistd.h>

int	ft_error(int argc, char **argv)
{
	int i;
	int k;

	i = 1;
	k = 0;
	if (argc != 10)
	return (1);
	while (argv[i])
	{
	while (argv[i][k])
			k++;
		if (k != 9)
		{
			return (1);
		}
		k = 0;
		i++;
	}
	return (0);
}

void	print_sud(char **puzz)
{
	int i;
	int k;

	i = 1;
	k = 0;
	while (puzz[i])
	{
		while (puzz[i][k])
		{
			
			write(1, &puzz[i][k], 1);
			write(1, " ", 1);
			k++;
		}
		write(1, "\n", 1);
		i++;
		k = 0;
	}
}

int	puzz_done(void)
{
	// ????????
	if (counter == -1)
		return (1);
	counter++;
	if (counter > 1)
		return (1);
	return (0);
	// end of ????????
}

int	puzz_solver(char ***puzz_ptr, int row, int col)
{
	char **puzz;
	char nx_num;

	puzz = *puzz_ptr;
	nx_num = '1';
	if (row == 9)
		return (puzz_done());
	else if (puzz[row][col] >= '1' && puzz[row][col] <= '9')
		return (next_case(puzz_ptr, row, col));
	else if (puzz[row][col] == '.')
		while (nx_num <= '9')
		{
			if (valid_num(puzz, nx_num, row, col))
			{
				puzz[row][col] = nx_num;
				// WHAT?
				if (next_case(puzz_ptr, row, col))
					return (1);
				puzz[row][col] = '.';
				// end of WHAT?
			}
			nx_num++;
		}
	return (0);
}

int	next_case(char ***puzz_ptr, int row, int col)
{
	if (col == 8)
		return (puzz_solver(puzz_ptr, row + 1, 0));
	else
		return (puzz_solver(puzz_ptr, row, col + 1));
}
