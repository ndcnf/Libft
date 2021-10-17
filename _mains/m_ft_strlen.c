/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:32:55 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/12 13:26:05 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../ft_strlen.c"

int	main()
{
	printf("Bonjour: %d\n", ft_strlen("Bonjour"));
	printf("attendu : %lu\n\n", strlen("Bonjour"));

	printf("Phrase type: %d\n", ft_strlen("Phrase type"));
	printf("attendu: %lu\n\n", strlen("Phrase type"));

	printf("(rien) : %d\n", ft_strlen(""));
	printf("attendu: %lu\n\n", strlen(""));
}
