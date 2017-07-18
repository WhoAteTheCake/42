/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 14:53:46 by laube             #+#    #+#             */
/*   Updated: 2017/07/04 15:11:42 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb);

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[k] != '\0' && k < nb)
	{
		dest[i + k] = src[k];
		k++;
	}
	return (dest);
}
