#include <unistd.h>
#define BUFF_SIZE 4096


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{
	while (*s)
	{
		ft_putchar(*s);
		s++;
	}
}

int		match_brackets(char a, char b)
{
	return ((a == '[' && b == ']') || (a == '(' && b == ')') || (a == '{' && b == '}'));
}

int		brackets(char *s)
{
	int i = 0;
	int pos = 0;
	char stack[BUFF_SIZE];
	while (s[i] != '\0')
	{
		if (s[i] == '{' || s[i] == '(' || s[i] == '[')
		{	
			stack[pos] = s[i];
			pos++;
		}
		if (s[i] == ')' || s[i] == '}' || s[i] == ']')
		{
			pos--;
			if (!match_brackets(stack[pos], s[i]))
				return 0;
		}
		i++;
	}
	return 1;
}

int		main(int ac, char **av)
{
	int i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			if (brackets(av[i]) == 1)
				ft_putstr("OK\n");
			else
				ft_putstr("Error\n");
			i++;
		}
	}
	else
		ft_putchar('\n');
}
