/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 10:44:44 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/12 11:07:26 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../ft_isprint.c"

int	main()
{
	printf("a: %d\n", ft_isprint('a'));
	printf("attendu : %d\n\n", isprint('a'));

	printf("27: %d\n", ft_isprint(27));
	printf("attendu: %d\n\n", isprint(27));

	printf("3: %d\n", ft_isprint(3));
	printf("attendu: %d\n\n", isprint(3));
}
