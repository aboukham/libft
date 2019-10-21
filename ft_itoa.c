#include "libft.h"

int		nb_digit(int n)
{
	int	digit;

	digit = 1;
	while (n / 10)
	{
		digit++;
		n = n / 10;
	}
	printf("%d\n", digit);
	return (digit);
}

char	*ft_itoa(int n)
{
	char			*str;
	int				i;
	int				digit;
	int				sign;
	unsigned int	nb;

	sign = ((n < 0)? 1 : 0);
	digit = nb_digit(n) + sign;
	if (!(str = (char *)malloc(sizeof(char) * (digit + 1))))
		return (NULL);
	i = 0;
	if (n < 0)
	{
		nb = -1 * n;
		str[i++] = '-';
	}
	else
		nb = n;
	while (--digit >= i)
	{
		str[digit] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (str);
}
