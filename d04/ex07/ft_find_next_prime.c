/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 23:07:10 by laube             #+#    #+#             */
/*   Updated: 2017/07/01 23:26:18 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int state;
	int i;

	state = 0;
	i = 2;
	while (1 < 2)
	{
		while (i <= nb)
		{
			if (i == nb && state == 0)
				return (nb);
			if (nb % i == 0)
				state = 1;
			i++;
		}
		i = 2;
		nb++;
		state = 0;
	}
}
