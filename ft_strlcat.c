#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	srclen;
	size_t lenth;

	srclen = ft_strlen((const char *)src);
	i = 0;
	while (dst[i])
		i++;
	lenth = ((i < size) ? i + srclen : size + srclen);
	j = 0;
	while (src[j] && i < size - 1)
	{
		dst[i] = src[j];
		j++;
		i++;
	}
	if (i < size)
		dst[i] = '\0';
	printf("%s\n", dst);
	return (lenth);
}
