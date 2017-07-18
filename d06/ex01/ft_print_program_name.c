/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 12:31:59 by laube             #+#    #+#             */
/*   Updated: 2017/07/05 18:14:31 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == -1)
		return (0);
	while (argv[0][i])
	{
		ft_putchar(argv[0][i]);
		i++;
	}
	ft_putchar('\n');
	return (0);
}
