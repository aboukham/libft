int	ft_atoi(const char *s)
{
	int	res;
	int	sign;

	sign = 1;
	while (*s && (*s == ' ' || *s == '\t'))
		s++;
	if (*s == '-')
		sign = -1;
	if (*s == '+' || *s == '-')
		s++;
	res = 0;
	while (*s && *s >= '0' && *s <= '9')
	{
		res = res * 10 + (*s - '0');
		s++;
	}
	return (sign *res);
}
