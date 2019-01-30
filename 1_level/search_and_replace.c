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

int main(int ac, char **av)
{
	if (ac == 4)
	{
		int i = 0;

		if (ft_strlen(av[2]) == 1 && ft_strlen(av[3]) == 1)
		{
			while (av[1][i] != '\0')
			{
				if (av[1][i] == av[2][0])
					av[1][i] = av[3][0];
				i++;
			}
			ft_putstr(av[1]);
		}
		
	}
	ft_putchar('\n');
	return (0);
}
