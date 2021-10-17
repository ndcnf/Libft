
#include "../ft_toupper.c"
#include <stdio.h>
#include <ctype.h>

int	main()
{
	int	c;

	c = 32;
	while (c >= 32 && c <= 126)
	{
		printf("%d ", ft_toupper(c));
		c++;
	}
	return (0);
}
