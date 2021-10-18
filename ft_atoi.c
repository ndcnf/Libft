/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 15:08:10 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/18 17:32:23 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*static int	is_number(char a)
{
	if (a >= '0' && a <= '9')
		return ('y');
	else
		return ('n');
}*/

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	i = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ' || \
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (str[i] >= '0' && str[i] <= '9')
	{
		value = str[i] - '0';
	//	i++;
		while (str[++i] >= '0' && str[i] <= '9' && str[i] != '\0')
		{
			value *= 10;
			value += str[i] - '0';
	//		i++;
		}
	}
	return (value * sign);
}
