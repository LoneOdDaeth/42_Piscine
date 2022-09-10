/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selsahin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 14:03:36 by selsahin          #+#    #+#             */
/*   Updated: 2022/08/30 15:03:16 by selsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	ri;
	int	swap;

	i = 0;
	ri = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[ri];
		tab[ri] = swap;
		i++;
		ri--;
	}
}
/*
int	main()
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size;
	int	j;

	size = 5;
	j = 0;

	while (j < size)
	{
		ft_putchar(tab[j] + 48);
		j++;
	}
	write(1, "\n", 1);
	ft_rev_int_tab(tab, size);
	j = 0;
	while (j < size)
	{
		ft_putchar(tab[j] + 48);
		j++;
	}
}
*/
