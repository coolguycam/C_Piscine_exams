#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	char *res = NULL;

	res = (char*)malloc(sizeof(src));
	int i = 0;
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = src[i];
	return (res);
}

int main(){
	char str[5] = "heyo";
	printf("%s\n", ft_strdup(str));
	return (0);
}
