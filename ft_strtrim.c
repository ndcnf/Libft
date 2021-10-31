/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 13:56:04 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/31 18:49:26 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Example:
 * s1		"....,.,,..,,,.,Hell,,.,.,o.,.,.,,.,."
 * set		".,"
 * return:	"Hell,,.,.,o"
 * ____________________________________________________*/
 
#include "libft.h"
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*bgn;
	char	*end;

	i = 0;
	j = 0;
	while (s1[i])
	{
		while (s1[i] == set[j])
		{
			j++;
		}
		bgn = s1[i];
		i++;
	}
	i = ft_strlen(s1);
	j = ft_strlen(s1);;
	while (i != 0)
	{
		while (s1[i] == set[j])
			j--;
		end = s1[i];
		i++;
	}



	/*char *ft_strtrim(char const *s1, char const *set)
{
    size_t    i;
    size_t    j;
    size_t    k;
    char    bgn;
    char    end;
    char    *lean;

    i = 0;
    j = 0;
    k = 0;
    while (s1[i])
    {
        while (s1[i] == set[j])
            j++;
        lean[k] = s1[i];
        i++;
        k++;
    }
    bgn = s1[i];
    
    i = strlen(s1);
    j = strlen(s1);
    while (i != 0)
    {
        while (s1[i] == set[j])
            j--;
        lean[k] = s1[i];
        i--;
        k++;
    }
    end = s1[i];
}
	 *
	 *
	 *
	 */

/*
	{
		printf("boucle : %s\n", ft_strrchr(s1, (int)set[i]));
		i++;
	}
*/
}
