#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
}

int		ft_strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return i;
}

char	*rev_wstr(char *s)
{
	char *res = NULL;
	int end = ft_strlen(s) - 1;
	int store = end;
	int i = 0;
	if (!(res = (char*)malloc(ft_strlen(s) + 1)))
		return NULL;
	res = (char*)malloc(ft_strlen(s) + 1);
	res[end + 1] = '\0';
	while (store >= 0)
	{
		if (s[store] == ' ' || store == 0)
		{
			end = store;
			if (store != 0)
				store++;
			while (s[store] != ' ' && s[store])
			{
				res[i] = s[store];
				i++;
				store++;
			}
			if (i != ft_strlen(s))
				res[i] = ' ';
			i++;
			store = end;
		}
		store--;
	}
	return res;
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_putstr(rev_wstr(av[1]));
	ft_putchar('\n');
	return 0;
}
