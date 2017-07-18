/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 16:08:16 by laube             #+#    #+#             */
/*   Updated: 2017/07/01 16:46:33 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int res;
	int count;

	count = power;
	res = 1;
	if (power > 1)
	{
		while (count-- > 0)
			res = res * nb;
	}
	else if (power == 1)
		res = nb;
	else if (power == 0)
		res = 1;
	else if (power < 0)
		res = 0;
	return (res);
}
