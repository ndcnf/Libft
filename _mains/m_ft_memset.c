/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:20:39 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/12 17:33:53 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../ft_memset.c"

int	main()
{
	char	tableau[] = "Bonjour";
	size_t	size = sizeof(char) * 7;

	printf("Size: %zu\n", size);
	printf("Before:%s\n", tableau);
	printf("After:%s\n", ft_memset(tableau, 'E', size));
	return (0);
}
