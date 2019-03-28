#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *c)
{
  int i = 0;
  while (c[i] != '\0')
  {
    ft_putchar(c[i]);
    i++;
  }
}

void print_bits(unsigned char octet)
{
  int i = 128;
  while (i > 0)
  {
	  if (i & octet)
		  ft_putchar('1');
	  else
		  ft_putchar('0');
	  i >>= 1; // or i /= 2;
  }
}
unsigned char 	swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

int		main(void)
{
	int i = 2;
	print_bits(i);
	i = swap_bits(i);
	print_bits(i);
	return (0);
}
