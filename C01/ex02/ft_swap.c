/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selsahin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:17:27 by selsahin          #+#    #+#             */
/*   Updated: 2022/08/30 13:17:50 by selsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, ", ", 2);
	write(1, &b, 1);
}
*/
void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int	main()
{
	int	a;
	int	b;
	
	a = 4;
	b = 2;
	ft_putchar(a + 48, b + 48);
	ft_swap(&a, &b);
	write(1, ", ", 2);
	ft_putchar(a + 48, b + 48);
}
*/
