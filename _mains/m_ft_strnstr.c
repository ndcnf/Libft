#include <string.h>
#include "../ft_strnstr.c"
#include "../ft_strlen.c"
#include <stdio.h>

int	main()
{
	char	*haystack = "Je suis une botte de foin";
	char	*needle = "botte";
	size_t	len = -1; //avec '/0' compris

	printf("OG: %s\n", (strnstr(haystack, needle, len)));
	printf("FT: %s\n\n", (ft_strnstr(haystack, needle, len)));
//	printf("ptr de needle: %p\n\n", &needle);

	haystack = "Je suis une fonction";
	needle = "serieuse";

	printf("OG: %s\n", (strnstr(haystack, needle, len)));
	printf("FT: %s\n\n", (ft_strnstr(haystack, needle, len)));

	haystack = "Je ne possede aucune aiguille";
	needle = "";

	printf("OG: %s\n", (strnstr(haystack, needle, len)));
	printf("FT: %s\n\n", (ft_strnstr(haystack, needle, len)));

	haystack = "";
	needle = "qui suis-je ?";

	printf("OG: %s\n", (strnstr(haystack, needle, len)));
	printf("FT: %s\n\n", (ft_strnstr(haystack, needle, len)));

	haystack = "aucune longueur";
	needle = "longueur";
	len = 0;
	
	printf("OG: %s\n", (strnstr(haystack, needle, len)));
	printf("FT: %s\n\n", (ft_strnstr(haystack, needle, len)));

	return (0);
}
