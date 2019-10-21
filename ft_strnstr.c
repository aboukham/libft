#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s1;
	if (!(*s2))
		return (str);	
	i = 0;
	while (i < n && *str)
	{
		if (*str == *s2)
			if (!ft_strncmp((const char *)str, s2, ft_strlen(s2)))
				return (str);
		str++;
		i++;
	}
	return (NULL);
}
