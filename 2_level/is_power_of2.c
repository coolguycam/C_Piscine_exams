#include <stdio.h>

int is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n /= 2;
	if (n == 1)
		return (1);
	else
		return (0);
}

int main(){
	int i = 0;
	int j = 1;
	int k = 2;
	int l = 9;
	int p = 64;

	printf("%d\n", is_power_of_2(i));
	printf("%d\n", is_power_of_2(j));
	printf("%d\n", is_power_of_2(k));
	printf("%d\n", is_power_of_2(l));
	printf("%d\n", is_power_of_2(p));
}
