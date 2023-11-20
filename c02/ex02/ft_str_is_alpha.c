/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 15:22:53 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/14 12:25:52 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	x;

	i = 0;
	if (str[0] == '\0')
		x = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			x = 1;
		else if (str[i] >= 'A' && str[i] <= 'Z')
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
	char	x[] = "teRte";

	if (ft_str_is_alpha(x))
		write(1, "1", 1);
	else
		write(1, "2", 1);
}