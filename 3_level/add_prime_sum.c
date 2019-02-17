#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int res = 0;
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
		res = res * 10 + s[i] - '0';
		i++;
	}
	return (res);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

int		is_prime(int n)
{
	int	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_add_prim_sum(int n)
{
	int i = 2;
	int count = 0;
	while (i <= n)
	{
		if (is_prime(i))
			count = count + i;
		i++;
	}
	ft_putnbr(count);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_add_prim_sum(ft_atoi(argv[1]));
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
