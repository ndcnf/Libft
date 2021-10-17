int	atoi(const char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + '0'; 
			i++;
	}
	return (str);
}
