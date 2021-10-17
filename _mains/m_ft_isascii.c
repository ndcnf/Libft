/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 10:24:24 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/12 10:31:43 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../ft_isascii.c"

int	main()
{
	printf("a: %d\n", ft_isascii('a'));
	printf("attendu : %d\n\n", isascii('a'));

	printf("0x82: %d\n", ft_isascii(0x82));
	printf("attendu: %d\n\n", isascii(0x82));

	printf("3: %d\n", ft_isascii(3));
	printf("attendu: %d\n\n", isascii(3));

	printf("'8': %d\n", ft_isascii('8'));
	printf("attendu: %d\n\n", isascii('8'));
}
