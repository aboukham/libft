#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if (s1 < s2)
	{
		i = -1;	
		while (++i < n)
			s1[i] = s2[i];
	}
	else
	{
		i = n;
		while (--i >= 0)
			s1[i] = s2[i];
	}
	return ((void *)s1);
}
