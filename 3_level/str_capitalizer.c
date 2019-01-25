


void	strmani(char * str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			if (str[(i+1)] <= 122 && str[i+1] >= 97)
				str[i+1] -= 32;
			i++;
		}
		else if (str[i] <= 122 && str[i] >= 97 && str[(i-1)] == 
	}
}

int		main(int argc, char **argv)
{
	int i = 1;
	int j = 0;

	if (argc > 1)
	{

	}
}
