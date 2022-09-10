/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selsahin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 11:51:39 by selsahin          #+#    #+#             */
/*   Updated: 2022/09/06 12:45:21 by selsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	lenght;

	i = 0;
	lenght = 0;
	while (dest[i] != '\0')
	{
		lenght++;
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[lenght + i] = src[i];
		i++;
	}
	dest[lenght + i] = '\0';
	return (dest);
}
/*
int	main()
{
	char s1[] = "42 Istanbul";
	char s2[] = "42 Kocaeli";

	printf("%s", ft_strcat(s2, s1));
}
*/
