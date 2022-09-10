/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selsahin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:13:31 by selsahin          #+#    #+#             */
/*   Updated: 2022/09/02 12:28:30 by selsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 48) && (str[i] <= 58))
			i++;
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int	main()
{
	char *a;

	a = "İstanbul";
	ft_str_is_numeric(a);
}
*/
