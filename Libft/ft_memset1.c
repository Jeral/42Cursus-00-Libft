#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	unsigned char *ptr;
	
	i = 0;
	ptr = (unsigned char *)b;
	while (i < len)
	{
		ptr[i++] = (unsigned char)c;
	}
	printf("%s\n", b);
	return (b);
}

int main(int argc, char **argv)
{
	ft_memset(argv, 'Z', 2);
}
