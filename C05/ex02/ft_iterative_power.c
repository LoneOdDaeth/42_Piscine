/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selsahin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 10:32:05 by selsahin          #+#    #+#             */
/*   Updated: 2022/09/10 14:19:49 by selsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	p;

	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	p = nb;
	while (power > 1)
	{
			p = p * nb;
			power--;
	}
	return (p);
}
