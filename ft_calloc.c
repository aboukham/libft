#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	if(!(mem = malloc(nmemb * size)))
		return (NULL);
	return (mem);
}
