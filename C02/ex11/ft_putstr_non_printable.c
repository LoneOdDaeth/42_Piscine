/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selsahin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 14:36:28 by selsahin          #+#    #+#             */
/*   Updated: 2022/09/03 20:31:22 by selsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

void	ft_putstr_non_printable(char	*str)
{
	int				i;
	unsigned char	a;

	i = 0;
	while (str[i])
	{
		a = str[i];
		if (ft_char_printable(a))
			ft_putchar(a);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[a / 16]);
			ft_putchar("0123456789abcdef"[a % 16]);
		}
		i++;
	}
}
/*
int	main()
{
	char *string;
	string = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(string);
}
*/
