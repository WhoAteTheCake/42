/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 10:56:37 by laube             #+#    #+#             */
/*   Updated: 2017/06/30 16:56:38 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str);

char	*ft_strrev(char *str)
{
	int i;
	int count;
	int d;
	char temp[5];

	i = 0;
	count = 0;
	d = 0;
	while (str[count] != '\0')
	{
		printf("%d", count);
		count++;
	}
	while (d < count)
	{
		temp[d] = str[d];
			d++;
	}
	while (--count >= 0)
	{
		str[i] = temp[count];
		i++;
	}
	return (str);
}

int main()
{
	char *pooch;
	pooch = "allo";
	ft_strrev(pooch);	
	return (0);
}
