/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/01 14:48:43 by laube             #+#    #+#             */
/*   Updated: 2017/07/01 14:51:15 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	if (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	else if (nb == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
