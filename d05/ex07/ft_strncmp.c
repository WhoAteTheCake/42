/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 23:38:04 by laube             #+#    #+#             */
/*   Updated: 2017/07/03 23:47:11 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n);
int	check_count(int cou1, int cou2, int lim);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int i;
	int k;
	int counter;

	i = 0;
	k = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[k] != '\0')
	{
		k++;
	}
	counter = check_count(i, k, n);
	return (counter);
}

int	check_count(int cou1, int cou2, int lim)
{
	if (lim <= cou1 && lim <= cou2)
		return (0);
	else if (cou1 == cou2)
		return (0);
	else if (cou1 < cou2)
		return (-1);
	else if (cou1 > cou2)
		return (1);
	else
		return (0);
}
