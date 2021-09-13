#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	size_t i;
	
	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
// bzero turns a character memory into '0' thus deleting it, unlike memset. however it is recommended to use memset over this function for maximum portability (from machine to machine)//
