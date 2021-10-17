/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 17:58:06 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/13 11:19:08 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../ft_bzero.c"

int	main()
{
	int	array[] = {3, 45, 67, 6, 5, 0, 2, 12};
	int	size;
	int	i;

   	size = sizeof(int) * 8;
	printf("Size: %d\n\n", size);
	i = 0;
	while (i < 8)
	{
		printf("Before: %d\n", array[i]);
		i++;
	}
	ft_bzero(array, size);
	printf("\n");
	i = 0;
	while (i < 8)
	{
		printf("After: %d\n", array[i]);
		i++;
	}
	return (0);
}
