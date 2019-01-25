#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strrev(char *str)
{
	char res[ft_strlen(str) + 1];
	int i = 0;
	int j = ft_strlen(str);

	while (i < j)
	{
		res[i] = str[((j - 1) - i)];
		i++;
	}
	i = 0;
	while (i < j)
	{
		str[i] = res[i];
		i++;
	}
	return (str);
}

int main(){
	char str[5] = "helo";
	printf("%s\n", str);
	printf("%s\n", ft_strrev(str));
	return (0);
}
