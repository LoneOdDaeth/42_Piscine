/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kesen <kesen@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 11:29:12 by kesen             #+#    #+#             */
/*   Updated: 2022/08/27 15:14:59 by kesen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_line(char ilk, char orta, char son, int x1)
{
	ft_putchar(ilk);
	while (--x1 > 1)
		ft_putchar(orta);
	if (x1)
		ft_putchar(son);
}

void	rush(int x, int y)
{
	int	adet;

	if (x > 0 && y > 0)
	{
		adet = 0;
		while (adet < y)
		{
			if (adet == 0)
				ft_print_line ('/', '*', '\\', x);
			else if (adet == y - 1)
				ft_print_line ('\\', '*', '/', x);
			else
				ft_print_line ('*', ' ', '*', x);
			adet++;
			write(1, "\n", 1);
		}
	}
}
