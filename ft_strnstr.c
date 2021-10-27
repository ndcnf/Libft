/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:36:49 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/27 10:05:29 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*ptr_h;
	char	*ptr_n;
	size_t	i;
	size_t	j;
	size_t	n_len;

	ptr_h = (char *)haystack;
	ptr_n = (char *)needle;
	i = 0;
	n_len = (size_t)ft_strlen(ptr_n);
	if (needle == NULL)
		return (ptr_h);
	while (ptr_h[i] && i < len)
	{
		j = 0;
		while (ptr_h[j + i] == ptr_n[j] && ptr_n[j] && (i + j) < len)
		{
			if (ptr_n[j + 1] == '\0')
				return (&ptr_h[i]);
			j++;
		}
		i++;
	}
	if ((j != n_len) || haystack == NULL || (len <= 0 && len > n_len))
		return (NULL);
	else
		return (&ptr_h[j - n_len]);
}
