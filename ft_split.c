#include "libft.h"

int		ft_nb_words(char const *s, char c)
{
	int	nb;

	nb = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s == 0)
			break ;
		while (*s && *s != c)
			s++;
		nb++;
	}
	return (nb);
}

char	*ft_word(char const *s, char c)
{
	char	*word;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (!(word = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (s[i] && s[i] != c)
		word[i] = s[i++];
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	if (!(tab = (char **)malloc(sizeof(char *) * (ft_nb_words(s, c) + 1))))
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			tab[i] = ft_word(s, c);
			j = ft_strlen(tab[i]);
			s = s + j;
			i++;
		}
	}
	tab[i] = 0;
	return (tab);
}
