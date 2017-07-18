/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 13:37:37 by laube             #+#    #+#             */
/*   Updated: 2017/07/02 14:59:44 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush04(int x, int y)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (k < y)
	{
		while (i < x)
		{
			if (i == 0 && k == 0)
				ft_putchar("A");
			else if ((i == x - 1 && k == y - 1) && (i != 0) && (k != 0))
				ft_putchar("A");
			else if ((i == 0 && k == y - 1) || (i == x - 1 && k == 0))
				ft_putchar("C");
			else if ((i == 0 || i == x - 1) || (k == 0 || k == y - 1))
				ft_putchar("B");
			else
				ft_putchar(" ");
			i++;
		}
		ft_putchar("\n");
		k++;
		i = 0;
	}
}
