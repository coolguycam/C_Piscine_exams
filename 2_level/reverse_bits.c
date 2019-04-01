#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rev_bits(unsigned char octet)
{
	int i = 1;
	while (i < 129)
	{
		if (i & octet)
			ft_putchar('1');
		else
			ft_putchar('0');
		i <<= 1;
	}
}

int main()
{
	rev_bits(2);
}
