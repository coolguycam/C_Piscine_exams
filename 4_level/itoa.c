
#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *s)
{
	int i = 0;
	char *res;

	res = (char*)malloc(sizeof(char) * ft_strlen(s) + 1);
	while (s[i] != '\0')
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_itoa(int nbr)
{
	int store = nbr;
	int count = 1;
	char *res;
	if (nbr == -2147483648)
	{
		return(ft_strdup("-2147483648"));
	}
	while (store > 9)
	{
		store /= 10;
		count++;
	}
	while (store < -9)
	{
		store /= 10;
		count++;
	}
	if (nbr < 0)
	{
		res = (char*)malloc(sizeof(char) * count + 2);
		res[0] = '-';
		res[count + 1] = '\0';
		nbr = -nbr;
		while (count >= 1)
		{
			res[count] = (nbr % 10) + '0';
			nbr /= 10;
			count--;
		}
	}
	else
	{
		res = (char*)malloc(sizeof(char) * count + 1);
		res[count] = '\0';
		count--;
		while (count >= 0)
		{
			res[count] = (nbr % 10) + '0';
			nbr /= 10;
			count--;
		}
	}
	return (res);
}

int main()
{
	printf("%s\n",ft_itoa(100));
	printf("%s\n",ft_itoa(-45));
	printf("%s\n",ft_itoa(0));
	printf("%s\n",ft_itoa(74998));
	printf("%s\n",ft_itoa(-2147483648));
	return (0);
}
