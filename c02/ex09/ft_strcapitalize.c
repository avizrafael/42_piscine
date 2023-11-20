/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:22:53 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/14 17:20:15 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			if (str[i - 1] != ' ' && str[i - 1] != '+'
				&& str[i - 1] != '-' && i == 0)
			{
				str[i] = str[i] + 32;
			}
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] == ' ' || str[i - 1] == '+'
				|| str[i - 1] == '-' || i == 0)
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	x[] = "salut, vas ? 42mots quarante-deu cie+et+un";

	printf("%s \n", x);
	ft_strcapitalize(x);
	printf("%s \n", x);
}