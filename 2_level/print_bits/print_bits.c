#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int oct = (int)octet;
	int z = 128;

	while (z > 0)
	{
		if (z & oct)
			ft_putchar('1');
		else
			ft_putchar('0');
		z >>= 1;
	}
}
