/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 14:15:57 by laube             #+#    #+#             */
/*   Updated: 2017/07/16 21:14:39 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_file.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int		ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int		ft_atoi(char **str)
{
	int i;
	int res;
	int sign;

	i = 0;
	res = 0;
	sign = 1;
	while (ft_is_whitespace(**str))
		i++;
	if (**str == '-' || **str == '+')
	{
		if (**str >= '0' && **str <= '9')
		{
			sign = (**str == '+') ? 1 : -1;
		}
		else
			return (0);
	}
	while (**str >= '0' && **str <= '9')
	{
		res = res * 10 + (**str - '0');
		(*str)++;
	}
	res *= sign;
	return (res);
}
