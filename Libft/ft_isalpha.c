/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjayalin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 15:45:50 by jjayalin          #+#    #+#             */
/*   Updated: 2021/09/13 15:45:50 by jjayalin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_isalpha(int c)
{
	if((c >= 'A' && c<= 'Z') || (c >= 'a' && c <= 'z'))
	{
		printf("%d\n", 1);
		return(1);
	}
	else 
	{
		return(0);
	}
}

int main(int argc, char **argv)
{	
	int t;
	int i;
	t = 1;
	i = 0;
	while (t != argc)
	{
		while (argv[t][i] != '\0')
		{
			ft_isalpha(argv[t][i]);
			i++;
		}
		t++;
	}
return (0);
}
