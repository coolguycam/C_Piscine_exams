#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *st)
{
	int i = 0;
	while (st[i] != '\0')
		i++;
	return (i);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		int j = ft_strlen(av[1]) - 1;

		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		if (av[1][j] == ' ' || av[1][j] == '\t')
		{
			while (av[1][j] == ' ' || av[1][j] == '\t')
			{	
				av[1][j] = '\0';
				j--;
			}
		}
		while (av[1][i] != '\0')
		{
			if (av[1][i] == '\t' || av[1][i] == ' ')
			{
				while (av[1][i] == '\t' || av[1][i] == ' ')
					i++;
				ft_putchar(' ');
			}
			else
			{
				ft_putchar(av[1][i]);
				i++;
			}
		}
	}
	ft_putchar('\n');
	return(0);
}
