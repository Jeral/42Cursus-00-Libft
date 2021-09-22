#include "libft.h"
int ft_isascii(int c)
{	
	if (c >= 0 && c <= 127)
	{
		printf("%d\n", 1);
		return (1);
	}
	else
	printf("%d\n",0);
	return(0);
}
int main()
{
	int c;
	c = 150;
	ft_isascii(c);
}	
