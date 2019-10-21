#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;
	size_t			j;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	i = -1;
	while (++i < n && s2[i] != c)
		s1[i] = s2[i];
	if (s2[i] != c || n == 0)
		return (NULL);
	else
		s1[i] = s2[i];
	j = 0;
	while (++j <= i + 1)
		s1++;
	return ((void *)s1);
}
