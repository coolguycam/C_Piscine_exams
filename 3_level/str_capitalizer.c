#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		int i = 1;
		int j = 0;

		while (av[i] != av[ac])
		{
			if (av[i][0] <= 90 && av[i][0] >= 65)
			{
				ft_putchar(av[i][j]);
				j++;
			}
			if (av[i][0] <= 122 && av[i][0] >= 97)
			{
				ft_putchar(av[i][j] - 32);
				j++;
			}
			while (av[i][j] != '\0')
			{
				if (av[i][j] <= 90 && av[i][j] >= 65 && (av[i][j-1] == '\t' || av[i][j-1] == ' '))
				{
			  		ft_putchar(av[i][j]);
					j++;
				}
				else if (av[i][j] <= 90 && av[i][j] >= 65)
				{
					ft_putchar(av[i][j] + 32);
					j++;
				}
				else if (av[i][j] <= 122 && av[i][j] >= 97 && (av[i][j-1] == '\t' || av[i][j-1] == ' '))
				{
					ft_putchar(av[i][j] - 32);
					j++;
				}
				else
				{
					ft_putchar(av[i][j]);
					j++;
				}
			}
			ft_putchar('\n');
			j = 0;
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
