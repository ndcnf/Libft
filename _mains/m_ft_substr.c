/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 09:12:12 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/29 11:49:08 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_substr.c"
#include "../ft_strlen.c"

int	main()
{
	char *str = "01234";
	size_t size = 10;
ft_substr(str, 10, size);

	return (0);
}
