#include "libft.h"
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	character;

	str = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == character)
		{
			return (str);
		}
		str++;
		i++;
	}
	return (NULL);
}
/*
** The ft_memchr() function locates the first occurrence of c (converted to an
** unsigned char) in string s. Returns a pointer to the byte located, or NULL
** if no such byte exists within n bytes.
*/
