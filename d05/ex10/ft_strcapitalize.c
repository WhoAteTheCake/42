/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 10:18:52 by laube             #+#    #+#             */
/*   Updated: 2017/07/04 11:27:38 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);

char	*ft_strcapitalize(char *str)
{
	int i;
	int state;

	i = 0;
	state = 1;
	while (str[i] != '\0')
	{
		if (state == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= ('a' - 'A');
			state = 0;
		}
		else if (state == 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += ('a' - 'A');
		else if (str[i] == ' ')
		{
			state = 1;
		}
		else
			state = 0;
		i++;
	}
	return (str);
}
