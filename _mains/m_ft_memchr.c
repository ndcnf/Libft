/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/22 10:28:38 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/22 11:47:43 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "../ft_memchr.c"

int main(int argc, const char * argv[])
{
    char search[] = "TechOnTheNet";

    printf("FT : %s\n\n\n\n\n", (ft_memchr(search, 'N', strlen(search))));
    printf("OG : %s\n\n\n\n\n", (memchr(search, 'N', strlen(search))));
    return 0;
}

