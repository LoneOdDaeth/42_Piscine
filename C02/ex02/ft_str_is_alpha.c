/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selsahin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 11:38:56 by selsahin          #+#    #+#             */
/*   Updated: 2022/09/02 12:12:18 by selsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 65) || (str[i] > 90))
		{
			if ((str[i] < 97) || (str[i] > 122))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	char *a;

	a = "İı";
	printf("%d", ft_str_is_alpha(a));
    
}
