/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:26:35 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/21 16:21:55 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0 || (nb == 0 && power != 0))
		return (0);
	if (power == 0 || (nb < 0 && power == 0))
		return (1);
	else
	{
		while (power > 0)
		{
			result = nb * result;
			power--;
		}
		return (result);
	}
}

#include <stdio.h>
int	main(void)
{
	int	i;

	i = ft_iterative_power(5, 0);
	printf("%d", i);
	return (0);
}
