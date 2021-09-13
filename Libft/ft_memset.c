#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char *p;
	
	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
		printf("%c\n", c);
		printf("%c\n", b);
	}
	return (b);
}

int main(int argc, char **argv)
{
	ft_memset(argv, 1, 3);
}
