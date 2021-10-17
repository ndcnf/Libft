/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:50:16 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/13 16:23:53 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../ft_memcpy.c"

int	main()
{
	int	src[] = {12, 0, 79};
	int	dst[] = {0, 9, 0};
	size_t	i;
	size_t	nbr;

	nbr = sizeof(int) * 3;
	i = 0;
	printf("Before\n");
	while(i < 3)
	{
		printf("SRC: %d\n", src[i]);
		printf("DST: %d\n", dst[i]);
		i++;
	}
	
	ft_memcpy(dst, src, nbr);

	printf("\n\n");

	i = 0;
	printf("After\n");
	while(i < 3)
	{
		printf("SRC: %d\n", src[i]);
		printf("DST: %d\n", dst[i]);
		i++;
	}

	return (0);
}
