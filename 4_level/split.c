#include <stdlib.h>

char ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

int is_end(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c = '\0')
	{
		return (1);
	}
	return (0);
}

char *split_word(char *str, int pos)
{
	int i = 0;
	char *res;

	while (is_end(str[pos]) == 0)
	{
		ret[i] = str[pos];
		i++;
		pos++;
	}
	return (res);
}

char **ft_split(char *str)
{
	char **res;
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (is_end(str[i]) == 1)
			i++;
		
	}
	return (res);
}
