#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int     main(int ac, char **av)
{
	int i = 0;
    if (ac == 1)
        ft_putchar('0');
    else if (ac > 1)
	{
        while (av[i] != av[(ac-1)])
            i++;
		ft_putnbr(i);
	}
	ft_putchar('\n');
    return (0);
}
