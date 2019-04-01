#include <stdlib.h>

int		ft_wordcount(char const *s)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n')
		i++;
	while (s[i] != '\0')
	{
		while (s[i] != ' ' && s[i] != '\t' && s[i] != '\n' && s[i])
			i++;
		count++;
		while (s[i] != ' ' && s[i] != '\t' && s[i] != '\n' && s[i])
			i++;
	}
	return (count);
}

char	*ft_strsub_delim(char const *s, unsigned int start)
{
	int		i;
	int		store;
	int		size;
	char	*res;

	i = 0;
	store = start;
	size = 1;	
	while (s[i] != ' ' && s[i] != '\t' && s[i] != '\n' && s[i])
	{
		size++;
		store++;
	}
	if (!(res = (char*)malloc(size)))
		return (NULL);
	res = (char*)malloc(size);
	while (s[i] != ' ' && s[i] != '\t' && s[i] != '\n' && s[i])
	{
		res[i] = s[start];
		i++;
		start++;
	}
	res[i] = '\0';
	return (res);
}

char	**ft_split(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	**res;

	i = 0;
	j = ft_wordcount(s);
	k = 0;
	if (!(res = (char**)malloc(sizeof(char*) * j)))
		return (NULL);
	res = (char**)malloc(sizeof(char*) * j);
	while (i < j)
	{
		while (s[k] == ' ' && s[k] == '\t' && s[k] == '\n' && s[k])
			k++;
		res[i] = ft_strsub_delim(s, k);
		i++;
		while (s[k] != ' ' && s[k] != '\t' && s[k] != '\n' && s[k])
			k++;
	}
	return (res);
}
