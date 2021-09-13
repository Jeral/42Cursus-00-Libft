#include <stdio.h>
int	ft_isalpha(int c)
{
	if((c >= 'A' && c<= 'Z') || (c >= 'a' && c <= 'z'))
	{
		printf("%d\n", 1);
		return(1);
	}
	else 
	{
		return(0);
	}
}

int main(int argc, char **argv)
{	
	int t;
	int i;
	t = 1;
	i = 0;
	while (t != argc)
	{
		while (argv[t][i] != '\0')
		{
			ft_isalpha(argv[t][i]);
			i++;
		}
		t++;
	}
return (0);
}
