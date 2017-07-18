/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 16:35:32 by laube             #+#    #+#             */
/*   Updated: 2017/07/12 20:16:04 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
#define FT_LIST_H

t_list	*ft_create_elem(void *data);

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;
#endif
