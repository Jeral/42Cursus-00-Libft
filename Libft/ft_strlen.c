#include <stdio.h>

int ft_strlen(const char *str)
{
	int i;
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
return(i);
}

int main()
{
	char str[] = "Life";
	int result;
	result = ft_strlen(str);
	printf("The length of the string is %d \n", result);
	return(0);
}
