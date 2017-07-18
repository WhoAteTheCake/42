/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:19:46 by laube             #+#    #+#             */
/*   Updated: 2017/07/05 18:06:57 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int count;
	int k;

	count = 0;
	if (argc == -1)
		return (0);
	while (argv[count])
	{
		count++;
	}
	while (count > 1)
	{
		k = 0;
		while (argv[count - 1][k])
		{
			ft_putchar(argv[count - 1][k]);
			k++;
		}
		count--;
		ft_putchar('\n');
	}
	return (0);
}
