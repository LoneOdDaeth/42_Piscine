/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selsahin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:18:33 by selsahin          #+#    #+#             */
/*   Updated: 2022/08/30 13:32:30 by selsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putchar(char a)
{
	write(1, &a, 1);
}
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main()
{
	int a;
	int b;
	int div;
	int mod;
    
    a = 8;
    b = 3;
	ft_putchar(a + 48);
	write(1, ", ", 2);
	ft_putchar(b + 48);
	ft_div_mod(a, b, &div, &mod);
	write(1, "\n", 1);
	ft_putchar(div + 48);
	write(1, ", ", 2);
	ft_putchar(mod + 48);
}
*/
