/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 10:59:26 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/15 16:03:11 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ptr_src;
	char	*ptr_dst;
	char	*buffer;
	size_t	i;

	//CA FONCTIONNE BIEN CA
	if (dst == NULL && src == NULL)
		return (NULL);

	ptr_src = (char *)src;
	ptr_dst = (char *)dst;

	//L'IDEE GENERALE, MAIS FAUT BOSSER DESSUS CLAIREMENT
	if (ptr_src == ptr_dst)
		buffer = ptr_src;

	//A FAIRE ICI
	i = 0;
	while (i < len)
	{
		ptr_dst[i] = ptr_src[i];
		i++;
	}


	//THE LAST RETURN
	return (ptr_dst);
	

}
