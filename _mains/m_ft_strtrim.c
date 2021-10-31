/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_ft_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:41:44 by nchennaf          #+#    #+#             */
/*   Updated: 2021/10/29 16:17:30 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_strtrim.c"
#include "../ft_strlen.c"
#include <stdio.h>

int	main()
{
	printf("FT: %s\n", ft_strtrim("poney jaune", "ney"));
	return (0);
}
