/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selsahin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 12:22:27 by selsahin          #+#    #+#             */
/*   Updated: 2022/09/03 21:56:38 by selsahin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	index;
	int	sayi;

	index = 0;
	sayi = 0;
	while (str[index] != '\0')
	{
		if (sayi == 0 && (str[index] >= 97 && str[index] <= 122))
		{
			str[index] -= 32;
			sayi++;
		}
		else if (sayi > 0 && (str[index] >= 65 && str[index] <= 90))
			str[index] += 32;
		else if (str[index] >= 65 && str[index] <= 90)
			sayi++;
		else if (str[index] >= 97 && str[index] <= 122)
			sayi++;
		else if (str[index] >= 48 && str[index] <= 57)
			sayi++;
		else
			sayi = 0;
		index++;
	}
	return (str);
}
/*
int	main()
{
    char metin[] = "salut, comMMnt tA vas ? 42mots quarante-deux";
	printf("%s\n", metin);
	printf("%s", ft_strcapitalize(metin));
}
*/
