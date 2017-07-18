/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 20:16:27 by laube             #+#    #+#             */
/*   Updated: 2017/07/12 23:32:28 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *list;

	list = *begin_list;
	if (list == NULL)
	{
		list = ft_create_elem(data);
	}
	else
	{
		while (list->next)
		{
			list = list->next;
		}
		list->next = ft_create_elem(data);
	}
}
