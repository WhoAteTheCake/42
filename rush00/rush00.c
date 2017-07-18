/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 09:44:39 by laube             #+#    #+#             */
/*   Updated: 2017/07/02 14:58:37 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush00(int x, int y)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (k < y)
	{
		while (i < x)
		{
			if ((i == 0 || i == x - 1) && (k == 0 || k == y - 1))
				ft_putchar("o");
			else if (i == 0 || i == x - 1)
				ft_putchar("|");
			else if (k == 0 || k == y - 1)
				ft_putchar("-");
			else
				ft_putchar(" ");
			i++;
		}
		ft_putchar("\n");
		k++;
		i = 0;
	}
}
