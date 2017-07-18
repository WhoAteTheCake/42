/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 20:41:02 by laube             #+#    #+#             */
/*   Updated: 2017/07/11 22:52:23 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int *arr;
	int i;

	i = 0;
	arr = malloc(sizeof(arr) * length);
	while (i < length)
	{
		arr[i] = f(tab[i]);
		i++;
	}
	return (arr);
}
