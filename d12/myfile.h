/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   myfile.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 16:20:11 by laube             #+#    #+#             */
/*   Updated: 2017/07/13 23:21:11 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MYFILE_H
# define MYFILE_H

# include <unistd.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/uio.h>

int		ft_strlen(char *str);
void	ft_putstr_fd(int fd, char *argv);
int		ft_display(char **argv);

#endif
