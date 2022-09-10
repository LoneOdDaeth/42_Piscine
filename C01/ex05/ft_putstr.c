/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selsahin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:43:46 by selsahin          #+#    #+#             */
/*   Updated: 2022/08/30 13:50:09 by selsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
void	ft_putstr(char *str)
{
	while (*str != "\0")
	{
		write(1, &*str, 1);
		str++;
	}
}
/*
int	main()
{
	char	str[] = {'a', 'b'};
	ft_putstr(str);
}
*/
