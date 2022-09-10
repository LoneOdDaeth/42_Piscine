/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selsahin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:04:24 by selsahin          #+#    #+#             */
/*   Updated: 2022/08/30 15:13:10 by selsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		else
			i++;
	}
}
/*
int	main()
{
	int tab[] = {5, 1, 4, 3, 2};
	int	size;
	int	j;

	size = 5;
	j = 0;

	while (j < size)
	{
		ft_putchar(tab[j] + 48);
		j++;
	}
	j = 0;
	write(1, "\n", 1);
	ft_sort_int_tab(tab, size);

	while (j < size)
	{
		ft_putchar(tab[j] + 48);
        j++;
	}
}
*/
