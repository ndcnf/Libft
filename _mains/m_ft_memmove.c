/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 11:31:08 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/15 14:53:25 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_memmove.c"
#include <stdio.h>
#include <string.h>

int	main()
{
	char	str[] = "ABCDEF";
	size_t	len;	

	len = sizeof(char)*6;

	printf("str %s\n", str);
	ft_memmove(str, str + 2, len);
	printf("Nouveau str %s\n", str);
}
