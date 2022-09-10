/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selsahin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:17:25 by selsahin          #+#    #+#             */
/*   Updated: 2022/09/03 14:35:16 by selsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
		count++;
	if (size != 0)
	{
		while (src[i] != '\0' && (i < size - 1))
		{
			dest[i] = src[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (count);
}
/*
int	main()
{
	char	src[] = "42 Istanbul";
	char	dest[] = "42 Kocaeli";
	unsigned int	n;

	n = 5;
	printf("%s\n", dest);
	ft_strlcpy(dest, src, n);
	printf("%s", dest);
}
*/
