/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjayalin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:02:28 by jjayalin          #+#    #+#             */
/*   Updated: 2021/10/19 18:02:28 by jjayalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	if (destsize < i)
	{
		while (src[j])
			j++;
		return (destsize + j);
	}
	while (destsize > 0 && i < destsize - 1 && src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	while (src[j++])
		i++;
	return (i);
}
//1. Createing space for i(src)
//2. making sure the destination size is bigger than dest size
//3. taking the string of src after destination 
//4. Adding null character
//5. adding the total size of the string with i+j
//6. return the total size of Destination(i)
//
