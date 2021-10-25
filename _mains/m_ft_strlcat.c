/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 11:40:46 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/25 16:26:16 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../ft_strlcat.c"
#include <string.h>
#include "../ft_strlen.c"

/*
 * Si le resultat de strlcat > size
 * La valeur sera tronquee.
 *
 * Sinon, la valeur est entierement copiee.
 *
 * Dans ces deux cas, la valeur retournee est la meme : src + dst (sans les zeros)
 *
 * Si le resultat de strlcat > 
 * Alors la valeur retournee sera 
 *
 *
 *
 *
 */
/*
int    main(void)
{
    char    dst[20] = "Lucie";
    char    dst2[20] = "Lucie";
	int		size = 9;

    printf("ft_strlcat= %lu\n", ft_strlcat(dst, "Genevey", size));
    printf("dst = %s\n", dst);
	printf("size = %d\n\n", size);
    printf("strlcat= %lu\n", strlcat(dst2, "Genevey", size));
    printf("dst2 = %s\n", dst2);
}


*/
int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
	int r2;
    int size = 0;
    char buffer[size];

	while (size < 36)
	{
		strcpy(buffer,first);
    	r = strlcat(buffer,last,size);
		r2 = ft_strlcat(buffer, last, size);
    	printf("size : %d\n", size);
		puts(buffer);
		printf("Value OG returned: %d\n",r);
    	printf("Value FT returned: %d\n",r2);

    	if( r > size )
        	puts("String truncated");
    	else
       		puts("String was fully copied");
		size++;
		printf("\n\n\n");
	}
    return(0);
}
