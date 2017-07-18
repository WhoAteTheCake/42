/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 23:00:59 by laube             #+#    #+#             */
/*   Updated: 2017/07/09 23:04:31 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	match(char *s1, char *s2)
{
	if (*s1 != *s2)
	{
		if (*s2 == '*')
		{
			while (*(s2 + 1) == '*')
				s2++;
			if (*(s2 + 1) != *s1)
				return (*s1 == '\0' ? 0 : match(s1 + 1, s2));
			else
				return (match(s1, s2 + 1));
		}
		else
			return (0);
	}
	if (*s1 == *s2)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (1);
		else
			return (match(s1 + 1, s2 + 1));
	}
	return (1);
}
