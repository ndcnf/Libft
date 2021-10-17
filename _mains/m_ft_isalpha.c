/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 12:54:23 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/11 16:57:13 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../ft_isalpha.c"

int	main()
{
	printf("a: %d\n", ft_isalpha('a'));
	printf("attendu : %d\n\n", isalpha('a'));

	printf("G: %d\n", ft_isalpha('G'));
	printf("attendu: %d\n\n", isalpha('g'));

	printf("3: %d\n", ft_isalpha(3));
	printf("attendu: %d\n\n", isalpha(3));
}
