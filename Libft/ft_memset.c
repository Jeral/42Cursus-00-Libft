/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjayalin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:45:50 by jjayalin          #+#    #+#             */
/*   Updated: 2021/09/13 15:45:50 by jjayalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
