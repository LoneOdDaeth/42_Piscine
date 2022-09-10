/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selsahin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:52:55 by selsahin          #+#    #+#             */
/*   Updated: 2022/09/02 14:07:02 by selsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
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
	char *c;
	
	c = "istanbul";
	ft_str_is_lowercase(c);
}
*/
