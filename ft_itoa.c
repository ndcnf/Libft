#include "libft.h"

static int	char_cnt(int n)
{
	int     sign;
	int     count;
	int     n_val;

	sign = 0;
	count = 0;
	n_val = n;
	if (n < 0)
	{
		sign = -1;
		n_val = -n;
	}
	else if (n >= 0)
		sign = 1;
	else
		sign = 0; // what the hell? Return NULL?
	while (n_val > 0 || n == 0)
	{
		n_val /= 10;
		count++;
	}
	if (sign == -1)
	{
		if (n_val == -2147483648)
			return (11);
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int	i;
	char	*nbr;
	int	cnt;
	int	n_val;

	cnt = char_cnt(n);
	i = cnt - 1;
	n_val = n;
	nbr = (char *)malloc(sizeof(char) * (cnt + 1));
	if (nbr == NULL || cnt == 0)
		return (NULL);
	if (n_val < 0)
	{	
		if (n_val == -2147483648)
			return ("-2147483648");
		nbr[0] = '-';
		n_val = -n_val;
	}
	while (n_val > 0 || n == 0)
	{
		nbr[i] = (n_val % 10) + '0';
		n_val /= 10;
		i--;
	}
	nbr[cnt] = '\0';
	return (nbr);
}
