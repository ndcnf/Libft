/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 08:32:06 by nchennaf          #+#    #+#             */
/*   Updated: 2021/11/02 17:03:47 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;
	size_t			s_len;

	ptr = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	s_len = (size_t)ft_strlen((char *)s);
	if (ptr == NULL)
		return (NULL);
	while (i < len && (s[start + i]) && start <= s_len)
	{
		ptr[i] = (char)s[start + i];
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
