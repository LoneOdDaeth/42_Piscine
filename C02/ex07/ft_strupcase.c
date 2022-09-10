/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcupcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selsahin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 17:07:01 by selsahin          #+#    #+#             */
/*   Updated: 2022/09/02 18:14:50 by selsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(char *c)
{
	int	j;

	j = 0;
	while (c[j] != '\0')
	{
		ft_putchar(c[j]);
		j++;
	}
}

int	main()
{
	char s[] = "kayseri";

	ft_print(s);
	ft_strupcase(s);
	ft_putchar('\n');
	ft_print(s);
}
*/
