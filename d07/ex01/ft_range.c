/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 11:40:57 by laube             #+#    #+#             */
/*   Updated: 2017/07/06 20:32:39 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *range;
	int i;

	i = 0;
	if (min > max)
	{
		range = 0;
		return (range);
	}
	range = malloc(4 * (max - min));
	while (min < max)
	{
		range[i++] = min;
		min++;
	}
	return (range);
}
