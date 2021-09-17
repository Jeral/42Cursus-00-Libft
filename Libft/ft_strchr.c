/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjayalin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:46:35 by jjayalin          #+#    #+#             */
/*   Updated: 2021/09/17 17:48:39 by jjayalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** Locates the first occurence of c in a string. The null character \0
**	is part of the string
** Input: const char s, int c
** Return:
**		ptr to located char
**		NULL if not in the string
*/

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
	return ((char*)NULL);
}
