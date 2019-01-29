#include <stdlib.h>
#include <stdio.h>


int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (0);
		s1++;
		s2++;
	}
	return (1);
}


char	*ft_strstr(char *hay, char *ned)
{
	int i = 0;
	int j = 0;
	
	while (hay[i] != '\0')
	{ 
		while (hay[i + j] == ned[j])
		{
			if (ned != '\0')
				return (&hay[i - j]);
			j++;
		}
		i++;
	}
	return (0);
}

int main()
{
    char *X = "Techie Delight - Coding made easy";
    char *Y = "Coding";

    printf("%s\n", ft_strstr(X, Y));

    return (0);
}
