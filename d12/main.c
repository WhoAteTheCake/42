/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 12:55:33 by laube             #+#    #+#             */
/*   Updated: 2017/07/13 23:14:35 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "myfile.h"

#define BUF_SIZE 4096

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr_fd(int fd, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}

int		ft_display(char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "open function hasn't worked properly\n", 38);
		return (1);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		write(1, buf, ret);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		write(2, "Not the required number of args\n", 32);
	ft_display(argv);
	return (0);
}
