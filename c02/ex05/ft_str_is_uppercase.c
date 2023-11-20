/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:22:53 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/14 12:37:02 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	x;

	i = 0;
	if (str[0] == '\0')
		x = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			x = 1;
		else
		{
			x = 0;
			break ;
		}
		i++;
	}
	return (x);
}

int	main(void)
{
	char	x[] = "RXx";

	if (ft_str_is_uppercase(x))
		write(1, "1", 1);
	else
		write(1, "0", 1);
}