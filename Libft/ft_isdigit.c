#include <stdio.h>
int ft_isdigit(int c)
{
	while(c >= 48 && c<= 57)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
