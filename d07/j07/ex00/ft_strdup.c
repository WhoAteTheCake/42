/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 09:39:42 by laube             #+#    #+#             */
/*   Updated: 2017/07/06 20:42:26 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *source)
{
	int i;

	i = 0;
	while (source[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*res;
	char	*des;
	int		i;

	res = (char*)malloc(ft_strlen(src) + 1);
	des = res;
	i = 0;
	while (src[i] != '\0')
	{
		des[i] = src[i];
		i++;
	}
	des[i] = '\0';
	return (res);
}
