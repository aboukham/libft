#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	j;

	if (c == 0)
		s = "\0";
	else
	{
		i = ft_strlen(s) - 1;
		while (i >= 0)
		{
			if (s[i] != c && i != 0)
				i--;
			else
				break ;
		}
		if (i == 0 && s[i] != c)
			return (NULL);
		j = 0;
		while (++j <= i)
			s++;
	}
	return ((char *)s);
}
