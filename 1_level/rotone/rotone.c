#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 90)
			ft_putchar(65);
		else if ((s[i] >= 65 && s[i] < 90) || (s[i] >= 97 && s[i] < 122))
			ft_putchar(s[i] + 1);
		else if (s[i] == 122)
			ft_putchar(97);
		else
			ft_putchar(s[i]);
		i++;
	}
}

int 	main(int ac, char **av)
{
	if (ac == 2)
		rotone(av[1]);
	ft_putchar('\n');
	return (0);
}
