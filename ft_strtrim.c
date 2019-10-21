#include "libft.h"

int		is_find_char(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		strtrim_len(char const *s1, char const *set)
{
	int	i;
	int	lenth;

	lenth = 0;
	i = ft_strlen(s1) - 1;
	while (i >= 0 && is_find_char(set, s1[i]))
	{
		i--;
		lenth++;
	}
	i = 0;
	while (s1[i] && is_find_char(set, s1[i]))
	{
		i++;
		lenth++;
	}
	return (ft_strlen(s1) - lenth);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	if (!(str = (char *)malloc(sizeof(char) * (strtrim_len(s1, set) + 1))))
		return (NULL);
	j = ft_strlen(s1) - 1;
	while (j >= 0 && is_find_char(set, s1[j]))
			j--;
	i = 0;
	while (s1[i] && is_find_char(set, s1[i]))
		i++;
	i--;
	k = 0;
	while (++i <= j)
		str[k++] = s1[i];
	str[k] = 0;
	return (str);
}
