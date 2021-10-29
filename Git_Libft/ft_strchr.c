/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjayalin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 18:02:27 by jjayalin          #+#    #+#             */
/*   Updated: 2021/10/19 18:02:27 by jjayalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while ((*s != '\0') && (*s != c))
	{
		s++;
	}
	if (*s == c)
	{
		return ((char *)s);
	}
	return ((char *) NULL);
}
/** Locates the first occurence of c in a string. The null character \0
**  is part of the string
** Input: const char s, int c
** Return:
**      ptr to located char
i
**      NULL if not in the string
*/
