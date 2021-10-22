/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:41:13 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/22 17:18:14 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*-----------------------------------------------------------------------*
strlcat() appends string src to the end of dst.
It will append at most (dstsize - (strlen(dst) - 1)) characters.
It will then NUL-terminate, unless dstsize is 0 or the original dst string
was longer than dstsize.

EXAMPLE:

*src	A	B	C	D	\0
*dst	E	F	G	H	\0

return ;
*-----------------------------------------------------------------------*/


size_t	strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*ptr_src;
	char	*buffer;

	i = 0;
	ptr_src = (char *)src;
	buffer = (char *)src;
	if (dstsize == 0)
		return (ft_strlen(ptr_src));
	while (ptr_src[i] && dst[i] && i < (dstsize - ft_strlen(dst) - 1))
		i++;
	

}
