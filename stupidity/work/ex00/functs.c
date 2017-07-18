/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 23:49:15 by laube             #+#    #+#             */
/*   Updated: 2017/07/16 21:10:28 by laube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_file.h"

int	get_sum(char **str)
{
	int		num1;
	int		num2;
	char	oper;

	num1 = get_product(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		if (**str != '+' && **str != '-')
			return (num1);
		oper = **str;
		(*str)++;
		num2 = get_product(str);
		if (oper == '+')
			num1 = num1 + num2;
		if (oper == '-')
			num1 = num1 - num2;
	}
	return (num1);
}

int	get_product(char **str)
{
	int		num1;
	int		num2;
	char	oper;

	num1 = get_number(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		if (**str != '*' && **str != '/' && **str != '%')
			return (num1);
		oper = **str;
		(*str)++;
		num2 = get_number(str);
		if (oper == '*')
			num1 = num1 * num2;
		if (oper == '/')
			num1 = num1 / num2;
		if (oper == '%')
			num1 = num1 % num2;
	}
	return (num1);
}

int	get_number(char **str)
{
	int num1;

	while (**str == ' ')
		(*str)++;
	if (**str == '(')
	{
		(*str)++;
		num1 = get_sum(str);
	}
	if (**str == ')')
	{
		(*str)++;
		return (num1);
	}
	return (ft_atoi(str));
}

int	eval_expr(char *str)
{
	return (get_sum(&str));
}
