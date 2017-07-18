/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 23:17:16 by laube             #+#    #+#             */
/*   Updated: 2017/07/17 23:33:55 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_file.h"

int main(int argc, char **argv)
{
	int fd;
	char buffer[100];
	char *name;
	int byte;

	name = argv[1];
	fd = open("tst.txt", O_RDONLY);
	byte = read(fd, buffer, 100);
	printf("%s", buffer);
	write(1, buffer, 101);

}
