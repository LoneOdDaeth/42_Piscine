/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selsahin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 10:14:36 by selsahin          #+#    #+#             */
/*   Updated: 2022/09/08 15:37:46 by selsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb > 12 || nb < 0)
		return (0);
	result = 1;
	while (nb >= 1 && nb <= 13)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
