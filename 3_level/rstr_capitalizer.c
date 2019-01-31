#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *st)
{
	int i = 0;
		
	while (st[i] != '\0')
	{
		ft_putchar(st[i]);
		i++;
	}
}

int ft_strlen(char *st)
{
	int i = 0;

	while (st[i] != '\0')
		i++;
	return (i);
}

char upper(char c)
{
	return (c - 32);
}

char lower(char c)
{
	return (c + 32);
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int i = 1;
		int j = 0;
		int len;


		while (av[i] != av[ac])
		{
			len = ft_strlen(av[i]) - 1;
			if (av[i][j] <= 90 && av[i][j] >= 65)
				av[i][j] = lower(av[i][j]);
			while (av[i][j] != '\0')
			{
				while (av[i][j] == '\t' || av[i][j] == ' ')
					j++;
				if (av[i][j] <= 90 && av[i][j] >= 65 && (av[i][j+1] != ' ' && av[i][j+1] != '\t' ))
					av[i][j] = lower(av[i][j]);
				else if (av[i][j] <= 122 && av[i][j] >= 97 && (av[i][j+1] == ' ' || av[i][j+1] == '\t'))
					av[i][j] = upper(av[i][j]);
				j++;
			}
			if (av[i][len] <= 122 && av[i][len] >= 97)
				av[i][len] = upper(av[i][len]);
			ft_putstr(av[i]);
			ft_putchar('\n');
			j = 0;
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
