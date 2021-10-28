#include <string.h>
#include "../ft_strdup.c"
#include "../ft_strlen.c"
#include <stdio.h>

int main()
{
	char	*str = "oh, la belle chaine !";
	printf("FT: %s\n", ft_strdup(str));
	printf("OG: %s\n\n", strdup(str));
	return (0);
}
