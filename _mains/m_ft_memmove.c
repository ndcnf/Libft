/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 11:31:08 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/19 13:25:08 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_memmove.c"
#include <stdio.h>
#include <string.h>

int	main()
{
	char	str[] = "Pokemon vert feuille";
	size_t	len;	

	len = sizeof(char)*20;

	printf("str %s\n", str);
	memmove(str, str + 4, 50);
	printf("Nouveau str %s\n", str);
}
