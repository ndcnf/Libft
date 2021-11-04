#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char		*str;
	unsigned int	len;

	len = ft_strlen((char *)s);
	str = (char *)malloc(sizeof(char) * (len + 1));
	
	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		f(i, str[i]);
		i++;
	}
	str[i] = '\0';
	return ((char *)str);
}
