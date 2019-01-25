#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] == s2[i] && s2[i])
	{
		i++;
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

int main (){
	char str[4] = "Hey";
	char str1[4] = "Hey";
	char str2[4] = "Hei";

	printf("%d", ft_strcmp(str, str1));
	printf("%d", ft_strcmp(str, str2));
	return (0);
}
