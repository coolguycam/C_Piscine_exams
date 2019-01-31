#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_puthex(int nb)
{
	if (nb > 15)
	{
		ft_puthex(nb / 16);
		ft_puthex(nb % 16);
	}
	else if (nb == 15)
		ft_putchar('f');
	else if (nb == 14)
		ft_putchar('e');
	else if (nb == 13)
		ft_putchar('d');
	else if (nb == 12)
		ft_putchar('c');
	else if (nb == 11)
		ft_putchar('b');
	else if (nb == 10)
		ft_putchar('a');
	else if (nb <= 9)
		ft_putchar(nb + '0');
}

int ft_atoi(char *st)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	if (st[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (st[i] <= '9' && st[i] >= '0')
	{
		res = res * 10 + st[i] - '0';
		i++;
	}
	return (res);
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_puthex(ft_atoi(av[1]));
	ft_putchar('\n');
	return (0);
}
