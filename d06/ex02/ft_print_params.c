/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 13:28:28 by laube             #+#    #+#             */
/*   Updated: 2017/07/05 18:05:46 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int k;

	i = 1;
	k = 0;
	if (argc == -1)
		return (0);
	while (argv[i])
	{
		while (argv[i][k])
		{
			ft_putchar(argv[i][k]);
			k++;
		}
		ft_putchar('\n');
		k = 0;
		i++;
	}
	return (0);
}
