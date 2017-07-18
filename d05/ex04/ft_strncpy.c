/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 16:30:28 by laube             #+#    #+#             */
/*   Updated: 2017/07/03 17:22:34 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		if (i >= n)
		{
			*(dest + i) = '\0';
		}
		else
		{
			*(dest + i) = *(src + i);
		}
		i++;
	}
	return (dest);
}
