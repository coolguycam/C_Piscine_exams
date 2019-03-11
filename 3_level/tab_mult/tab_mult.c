#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb/10);
		ft_putnbr(nb%10);
	}
	else
		ft_putchar(nb + '0');
}

int ft_atoi(char *st)
{
	int i = 0;
	int res = 0;
	
	while (st[i] != '\0')
	{
		res = res * 10 + st[i] - '0';
		i++;
	}
	return (res);
}

void	tab_mult(int num)
{
	int i = 1;
	
	while (i < 10)
	{
		ft_putnbr(i);
		ft_putstr(" x ");
		ft_putnbr(num);
		ft_putstr(" = ");
		ft_putnbr(i * num);
		ft_putchar('\n');
		i++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		tab_mult(ft_atoi(av[1]));
	else
		ft_putchar('\n');
	return (0);
}
