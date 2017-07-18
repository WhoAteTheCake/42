/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 21:08:16 by laube             #+#    #+#             */
/*   Updated: 2017/07/11 23:07:44 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_intcmp(int num1, int num2)
{
	return (num1 - num2);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int count;

	count = 0;
	f = ft_intcmp;
	i = 0;
	while (i < length - 1)
	{
		count = f(tab[i], tab[i + 1]);
		if (count > 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
