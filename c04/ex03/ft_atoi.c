/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 13:42:39 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/22 14:44:15 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	nbrminus;

	i = 0;
	nbr = 0;
	nbrminus = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			nbrminus++;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	if (nbrminus % 2 == 1)
		return (nbr * -1);
	return (nbr);
}

#include <stdio.h>
int	main(int ac, char **av)
{
	int	n;

	if (ac != 2)
		return (0);

	printf("%s \n", av[1]);
	n = ft_atoi(av[1]);
	printf("%d ", n);
	return (0);
}
