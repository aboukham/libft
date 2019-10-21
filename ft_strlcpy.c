#include "libft.h"

size_t	ft_strlcpy(char *dst, char const *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	while (src[i] && i < size)
		dst[i] = src[i++];
	dst[i] = 0;
	if (len < size)
		return (size);
	else
		return (len);
}
