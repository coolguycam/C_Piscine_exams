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
  char res[8];
  int num = octet;
  int i = 8;
  while (i-- > 0)
  {
    if (num > 1)
    {
      if (num % 2 == 0)
        res[i] = '0';
      else if (num % 2 == 1)
        res[i] = '1';
    }
    if (num <= 1)
    {
      if (num == 0)
        res[i] = '0';
      else if (num == 1)
        res[i] = '1';
    }
    num /= 2;
  }
  ft_putstr(res);
}

int main() {
  print_bits(255);
  ft_putchar('\n');
  print_bits(2);
  ft_putchar('\n');
  return 0;
}
