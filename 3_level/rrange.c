#include <stdlib.h>
#include <stdio.h>
int *ft_rrange(int start, int end)
{
	int *res;
	int i = 0;
	int store = end;
	int size = 0;

	if (store > start)
	{
		while (store >= start)
		{
			size++;
			store--; 
		}
	}
	else if (store < start)
	{
		while (store <= start)
		{
			size++;
			store++;
		}
	}
	res = (int*)malloc(sizeof(int) * size);
	if (end < start)
	{
		while (i < size)
		{
			res[i] = end;
			end++;
			i++;
		}
	}
	else if (end > start)
	{
		while (i < size)
		{
			res[i] = end;
			end--;
			i++;
		}
	}
	else if (size == 0)
		res[i] = end;
	return (res);
}

int main() {
  int i = 0;
  int *tab;
  tab = ft_rrange(8, 3); // change numbers to test
  while (i < 5)  // dont forget to account for array size
  {
    printf("%d\n", tab[i]);
    i++;
  }
  return 0;
}
