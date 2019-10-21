#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;

	if(!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str = (char *)s;
	i = -1;
	while (*str && ++i < start)
		str++;
	return (str);
}
