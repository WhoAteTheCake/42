/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 21:15:58 by laube             #+#    #+#             */
/*   Updated: 2017/07/07 11:39:56 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*res;
	int		count;
	int		i;
	int		k;

	count = 0;
	i = 0;
	k = 0;
	while (++i < argc)
		count += ft_strlen(argv[i]);
	res = (char*)malloc((sizeof(*res) * count) + argc);
	i = 1;
	count = 0;
	while (argv[i])
	{
		while (argv[i][k])
		{
			res[count] = argv[i][k];
			k++;
			count++;
		}
		res[count] = '\n';
		k = 0;
		count++;
		i++;
	}
	return (res);
}

int main(int argc, char **argv)
{
	char *rr;
	rr = ft_concat_params(argc, argv);
	printf("%s", rr);
	return (0);
}
