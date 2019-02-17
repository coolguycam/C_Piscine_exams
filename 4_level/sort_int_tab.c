#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;

	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}

int main()
{
	int i = 0;
	unsigned int x = 6;
	int tab[] = {7, 0, 32, 6, 5, 19};
	sort_int_tab(tab, x);
	while (i < 6)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
}
