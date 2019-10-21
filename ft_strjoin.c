#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*s;
	int		i;
	int		j;

	if (!(s = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j])
	{
		s[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = 0;
	return (s);
}
