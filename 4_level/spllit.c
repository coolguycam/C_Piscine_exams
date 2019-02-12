#include <stdlib.h>
char **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int count = 0;
    char **res = NULL;
    char *word = NULL;
   
    while (str[i] != '\0')
    {
        if (str[i] = ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        while (str[i] >= 32 || str[i] != 127 && str[i] != '\0')
        {
            j++;
            i++;
        }
        count++;
        word = (char*)malloc(sizeof(char) * j + 1);
        while (str[i-j] != str[i])
        {
            word[k] = str[i-j];
            j--;
            k++;
        }
        word[k] = '\0';
        res = (char**)malloc(sizeof(char*) * count + res);
        *res = word;
        res++;
        word = NULL;
        k = 0;
    }
    return (res);

}
int main() {

  char str[13] = "hey hi ello ";
  char **res;
  res = ft_split(str);
  printf("%s\n", res[0]); 
  return 0;
}
