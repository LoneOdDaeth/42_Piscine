/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selsahin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:30:29 by selsahin          #+#    #+#             */
/*   Updated: 2022/09/03 20:15:32 by selsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print(char *p)
{
    int    j;

    j = 0;
    while (p[j] != '\0')
    {
        ft_putchar(p[j]);
        j++;
    }
}
*/
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "42 Istanbul";
	char	dest[] = "42 Kocaeli";

	ft_print(src);
	write(1, "\n", 1);
	ft_print(dest);
	write(1, "\n", 1);
	ft_strcpy(dest, src);
	ft_print(dest);
}
*/
