/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nchennaf <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:44:45 by nchennaf          #+#    #+#             */
/*   Updated: 2021/11/02 18:02:07 by nchennaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Example:
 * s		"Everything needs a delimiter."
 * c		" "
 * return	"Everything", "needs", "a", "delimiter.", NULL
 * ------------------------------------------------------------*/

/* Returns the number of strings in the string s*/
static int	word_cnt(char *s, char c)
{
	int	i;
	int	is_word;
	int	cnt;
	
	i = 0;
	is_word = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] == c)
			is_word = 0;
		else if (s[i] != c && is_word == 0)
		{
			is_word = 1;
			cnt++;
		}
		i++;
	}
	return (cnt);
}

static void	*new_str(char *dst, char *src, char c)
{
	int		i;

	i = 0;
	if ()




	i = 0;
	word = s;
	while (s[i])
	{
		cnt = 0;
		if (s[i] == c)
			 cnt = 0;
		else
		{
			word++;
			cnt++;
		}
		i++;
	}
	return (word);







	word_cnt((char *)s, c);

}

/*
static char *first(char *str, char *c)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] != c[j] && c[j])
			j++;
		if (!c[j])
			return (&str[i]);
		else
			i++;
	}
	return (0);
}

*/

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	size_t	**ptr;
	char	*lean;
	int		cnt;

	i = 0;
	j = 0;

	if (!s)
		return (NULL);
	if (c == NULL)
		return (s);

	cnt = word_cnt((char *)s, c);
	ptr = malloc(sizeof(char) * cnt + 2);



	return (0);
}

// 1 Compter le bon nombre de mots et allouer le bon nombre de chaine de caracteres
// Prevoir les cas de caracteres multiples, aucun caractere, uniquement des separateurs, avant le premier mot ou apres le dernier
// Si char multiples: on incremente et on osef
// Si pas de char: on retourne s ?
// Si uniquement des separateurs: on retourne s ??
// Si avant le premier: osef, on passe
// Si apres le dernier mot: osef, on passe
//// Déterminer le nombre de chaînes de caractères à créer : boucler sur c + 2
//// Faire une malloc sur ce nombre et l'allouer a un tableau de tableau
// Faire une malloc sur le nombre de caracteres que prendra chaque tableau (la valeur sera differente selon les strings)
// free ? (peut-etre inutile) d'autant plus que les tableaux liberes doivent etre renvoyes. Se renseigner, mais passe sans.
//
// 2 Attribuer un tableau par chaine de caracteres (dispatcher)
// Boucler tant que s n'est pas termine
// Recopier la fonction first dans ft_strtrim pour avoir le premier caractere (!c)
// Longeur du mot a determiner pour chacun
// On connait donc la valeur de chaque mot. On malloc chacun de maniere individuelle.
// (Chercher le délimiteur avec ft_strchr dans cette boucle tant que le nombre de c != 0)
// (Tant que c[i] == s[i], on incremente)
// Des qu'on rencontre un c, ajouter le /0 et retourner la valeur a la chaine de caractere
// Revenir tant que s n'est pas termine
// Renvoyer la valeur NULL en dernier (derniere string) quand s == '\0'
// 
// 3 
