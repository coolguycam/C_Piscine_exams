#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int check(char *str, int pos)
{
	int i = 0;
	while (i <= pos)
	{	
		if (str[pos] == str[i])
			return (0);
		i++;
	}	
	return (1);
}

int main(int ac, char **av)
{
	if (ac == 3)
	{
		int i = 0;
		int j = 0;
		
		while (av[2][i] != '\0')
		{
			if (av[1][j] == av[2][i] && check(av[1], j))
			{
				ft_putchar(av[1][j]);
				j++;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
