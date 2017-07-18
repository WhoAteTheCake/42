/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 14:52:40 by laube             #+#    #+#             */
/*   Updated: 2017/07/01 15:38:26 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int res;
	int counter;

	counter = 1;
	res = 1;
	while (counter < nb)
	{
		res = res * (counter + 1);
		counter++;
	}
	return (res);
}
