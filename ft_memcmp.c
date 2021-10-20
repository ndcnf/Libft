/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 16:52:56 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/19 18:26:43 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;

	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	i = 0;
	while ((ptr_s1[i] && ptr_s2[i]) && i < n)
	{
		if (ptr_s1[i] == ptr_s2[i])
			;
		else if ((ptr_s1[i] > ptr_s2[i]) || (ptr_s1[i] < ptr_s2[i]))
			return (ptr_s1 - ptr_s2);
		i++;
	}
	return (0);
}
