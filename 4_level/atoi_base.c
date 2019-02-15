#include <stdio.h>

int hex_val(char c);
int atoi_base(const char *s, int s_base);

int hex_val(char c)
{
	if (c >= 48 && c <= 57)
		return (c - '0');
	else if (c >= 65 && c <= 70)
		return (c - 'A' + 10);
	else if (c >= 97 && c <= 102)
		return (c - 'a' + 10);
	return (0);
}

int	atoi_base(const char *s, int s_base)
{
	int i = 0;
	int sign = 1;
	int res = 0;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i] != '\0')
	{
		res = res * s_base + hex_val(s[i]);
		i++;
	}
	return (res * sign);
}

int main()
{
	char str[] = "4aef";
	printf("%d", atoi_base(str, 10));
	return (0);
}
