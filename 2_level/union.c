#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char *ft_strcat(char *st1, char *st2)
{
	int i = 0;
	int j = 0;

	while (st1[i] != '\0')
		i++;
	while (st2[j] != '\0')
	{
		st1[i] = st2[j];
		i++;
		j++;
	}
	st1[i] = '\0';
	return (st1);
}

int check(char *st, int pos)
{
	int i = 0;

	while (i < pos)
	{
		if (st[pos] == st[i])
			return (0);
		i++;
	}
	return (1);
}

int main (int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;

		ft_strcat(av[1], av[2]);
		while (av[1][i] != '\0')
		{
			if (check(av[1], i) == 1)
			{
				ft_putchar(av[1][i]);
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
