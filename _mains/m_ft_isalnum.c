/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:23:41 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/11 17:27:49 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../ft_isalnum.c"

int	main()
{
	printf("a: %d\n", ft_isalnum('a'));
	printf("attendu : %d\n\n", isalnum('a'));

	printf("G: %d\n", ft_isalnum('G'));
	printf("attendu: %d\n\n", isalnum('g'));

	printf("3: %d\n", ft_isalnum(3));
	printf("attendu: %d\n\n", isalnum(3));

	printf("'8': %d\n", ft_isalnum('8'));
	printf("attendu: %d\n\n", isalnum('8'));
}
