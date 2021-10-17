/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:42:08 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/11 17:17:41 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../ft_isdigit.c"

int	main()
{
	printf("a: %d\n", ft_isdigit('a'));
	printf("attendu: %d\n\n", isdigit('a'));

	printf("G: %d\n", ft_isdigit('G'));
	printf("attendu: %d\n\n", isdigit('g'));

	printf("48: %d\n", ft_isdigit(48));
	printf("attendu: %d\n\n", isdigit(48));

	printf("10: %d\n", ft_isdigit(10));
	printf("attendu : %d\n\n", isdigit(10));

	printf("0: %d\n", ft_isdigit(0));
	printf("attendu: %d\n\n", isdigit(0));

	printf("'8': %d\n", ft_isdigit('8'));
	printf("attendu: %d\n\n", isdigit('8'));
}
