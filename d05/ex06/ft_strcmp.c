/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/03 22:30:49 by laube             #+#    #+#             */
/*   Updated: 2017/07/03 22:43:03 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);
int	check_count(int cou1, int cou2);

int	ft_strcmp(char *s1, char *s2)
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
	counter = check_count(i, k);
	return (counter);
}

int	check_count(int cou1, int cou2)
{
	if (cou1 == cou2)
		return (0);
	if (cou1 < cou2)
		return (-1);
	if (cou1 > cou2)
		return (1);
	else
		return (0);
}
