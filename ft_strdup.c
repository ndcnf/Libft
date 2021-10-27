/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:38:44 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/27 17:08:32 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr_s;
	char	*ptr_m;
	char	*buffer;
	int		i;

	i = 0;
	ptr_m = (char *)malloc((ft_strlen((char *)s1) * sizeof(char *) + 1));
	ptr_s = (char *)s1;
	buffer = ptr_s;
	if (ptr_m == NULL)
		return (0);
	while (ptr_s[i] && buffer[i])
	{
		buffer[i] = ptr_s[i];
		i++;
	}

	buffer[i] = '\0';
	return (0);










































/*	
	int		i;
	char	*sum;
	char	*ptr_s;

	i = 0;
	ptr_s = (char *)s1;
	sum = (int)malloc(ft_strlen((char *)s1) + 1);
	if (sum == 0)
		return (0);
	
	while (ptr_s[i])
	{
	i++;	
	}
	ptr_s[i] = '\0';
	return (0);

	*/
}
