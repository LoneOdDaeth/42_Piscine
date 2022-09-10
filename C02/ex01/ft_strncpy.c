/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selsahin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:34:48 by selsahin          #+#    #+#             */
/*   Updated: 2022/09/03 20:20:07 by selsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char *p)
{
	int	j;

	j = 0;
	while (p[j] != '\0')
	{
		ft_putchar(p[j]);
		j++;
	}
}

int	main(void)
{
	unsigned int	i;
	char	src[] = "42 Istanbul";
	char	dest[] = "42 Kocaeli";

	i = 4;
	ft_print(src);
	ft_putchar('\n');
	ft_print(dest);
	ft_putchar('\n');
	ft_strncpy(dest, src, i);
	ft_print(src);
	ft_putchar('\n');
	ft_print(dest);
}
*/
