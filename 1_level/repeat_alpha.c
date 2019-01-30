#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int find_reps(char c)
{
	if (c <= 90 && c >= 65)
		return (c - 64);
	else if (c <= 122 && c >= 97)
		return (c - 96);
	else
		return (1);
}

int main (int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		int num;

		while (av[1][i] != '\0')
		{
			num = find_reps(av[1][i]);
			while (num > 0)
			{
				ft_putchar(av[1][i]);
				num--;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
