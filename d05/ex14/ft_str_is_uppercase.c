/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 13:56:11 by laube             #+#    #+#             */
/*   Updated: 2017/07/04 13:59:21 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[0] == '\0')
			return (1);
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
