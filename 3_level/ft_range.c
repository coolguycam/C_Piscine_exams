#include <stdlib.h>
#include <stdio.h>
int        *ft_range(int start, int end)
{
    int *res;
    int i = 0;
    int store = start;
    int size = 0;

    while (store <= end)
    {
      size++;
      store++;
    }
    res = (int*)malloc(sizeof(int) * size);
    while (i < size)
    {
        res[i] = start;
        start++;
        i++;
    }
    return (res);
}

int main() {
  int i = 0;
  int *tab;
  tab = ft_range(1, 3);
  while (i < 3)
  {
    printf("%d\n", tab[i]);
    i++;
  }
  return 0;
}
