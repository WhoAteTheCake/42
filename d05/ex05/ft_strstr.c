/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 17:29:52 by laube             #+#    #+#             */
/*   Updated: 2017/07/04 10:08:59 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		k;
	char	*res;

	i = 0;
	k = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i] == to_find[k] || to_find[k] == '\0')
		{
			res[k] = to_find[k];
			if (to_find[k] == '\0')
				return (res);
			k++;
			i++;
		}
		k = 0;
		i++;
	}
	return (0);
}
