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
		int i = ft_strlen(av[1]) - 1;
		while ((av[1][i] <= 32 || av[1][i] == 127) && av[1][i] != '\0')
			i--;
		while (av[1][i] > 32 && av[1][i] != 127)
			i--;
		i++;
		while (av[1][i] > 32  && av[1][i] != 127 && av[1][i] != '\0')
		{
			ft_putchar(av[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
