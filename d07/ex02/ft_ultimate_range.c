/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 20:22:31 by laube             #+#    #+#             */
/*   Updated: 2017/07/06 20:28:33 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;
	int *arr;

	i = min;
	size = max - min;
	if (size <= 0)
	{
		*range = 0;
		return (0);
	}
	arr = (int*)malloc(sizeof(*arr) * size);
	while (i - min <= size)
	{
		arr[i - min] = i;
		i++;
	}
	*range = arr;
	return (size);
}
