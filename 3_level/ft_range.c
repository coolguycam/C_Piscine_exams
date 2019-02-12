#include <stdlib.h>
#include <stdio.h>
int        *ft_range(int start, int end)
{
    int *res;
    int i = 0;
    int store = start;
    int size = 0;

	if (store < end)
	{
    	while (store <= end)
    	{
      		size++;
      		store++;
    	}
	}
	else if (store > end)
	{
		while (store >= end)
		{
			size++;
			store--;
		}
	}
    res = (int*)malloc(sizeof(int) * size);
	if (start < end)
	{
		while (i < size)
    	{
       		res[i] = start;
       		start++;
       		i++;
		}
	}
	else if (start > end)
	{
		while(i < size)
		{
			res[i] = start;
			start--;
			i++;
		}
    }
	else if (size == 0)
		res[i] = store;
    return (res);
}

int main() {
  int i = 0;
  int *tab;
  tab = ft_range(1, 1); // change numbers to test
  while (i < 1)  // dont forget to account for array size
  {
    printf("%d\n", tab[i]);
    i++;
  }
  return 0;
}
