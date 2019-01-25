#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int res = 0;

	while (i < len)
	{
		if (tab[i] > res)
			res = tab[i];
		i++;
	}
	return (res);
}

int main() {
	int arr[6] = {1, 3, 6, 7, 2, 1};
	printf("%d\n", max(arr, 6));
	return (0);
}
