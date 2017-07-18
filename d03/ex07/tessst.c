/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 10:56:37 by laube             #+#    #+#             */
/*   Updated: 2017/06/30 14:27:52 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stlib.h>

char	*ft_strrev(char *str);

char	*ft_strrev(char *str)
{
	int i;
	int count;
	char *temp;

	i = 0;
	count = 0;
	temp = str;
	printf("%c", str);
//	while (str[count] != '\0')
//		count++;
//	while (--count >= 0)
//	{
//		str[i] = temp[count];
//		i++;
//	}
//	return (str);
}
int main()
{
	char *pooch;
	pooch = "allo";
	ft_strrev(pooch);	
	return (0);
}
