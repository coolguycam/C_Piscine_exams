#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
}

int is_char(char c)
{
	if (c >= 33 && c <= 126)
		return (1);
	return (0);
}

int	is_upper(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

int is_lower(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int space_or_tab(char c)
{
	if (c == '\t' || c == ' ')
		return (1);
	return (0);
}

char to_upper(char c)
{
	return (c - 32);
}

char to_lower(char c)
{
	return (c + 32);
}

void ft_putstr_capitalizer(char *s)
{
	int i = 0;

	while (is_char(s[i]) != 1)
		i++;
	if (is_lower(s[i]) == 1)
		s[i] = to_upper(s[i]);
	while (s[i] != '\0')
	{
		if (is_lower(s[i]) == 1 && space_or_tab(s[i - 1])== 1)
			s[i] = to_upper(s[i]);
		else if (is_upper(s[i]) == 1 && is_char(s[i - 1]) == 1)
			s[i] = to_lower(s[i]);
		else
			s[i] = s[i];
		i++;
	}
	ft_putstr(s);
}

int		main(int ac, char **av)
{

	if (ac > 1)
	{
		int i = 1;
		while (i < ac)
		{
			ft_putstr_capitalizer(av[i]);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}
