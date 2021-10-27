/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:38:16 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/27 16:37:27 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;
	size_t	i;
	size_t	sum;

	i = 0;
	ptr = NULL;
	sum = count * size;
	ptr = (char *)malloc(sum);
	if (ptr == NULL)
		return (0);
	while (sum)
	{
		ptr[i] = 0;
		i++;
		sum--;
	}
	ptr[i] = '\0';
	return ((void *)ptr);
}
