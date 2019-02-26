#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *st)
{
	int i = 0;
		
	while (st[i] != '\0')
	{
		ft_putchar(st[i]);
		i++;
	}
}

int	wdmatch(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (s2[i] != '\0')
	{
		if (s2[i] == s1[j])
			j++;
		i++;
	}
	if (s1[j] == '\0')
		return (1);
	return (0);
}

int main(int c, char **v)
{
	if (c == 3)
	{
		if (wdmatch(v[1], v[2]))
			ft_putstr(v[1]);
	}
	ft_putchar('\n');
}

