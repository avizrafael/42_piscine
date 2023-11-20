/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:26:35 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/26 11:51:09 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0 || (nb == 0 && power != 0))
		return (0);
	if (power == 0 || (nb < 0 && power == 0))
		return (1);
	else
	{
		result = nb * ft_recursive_power(nb, (power - 1));
		return (result);
	}
}

#include <stdio.h>
int	main(void)
{
	int	i;

	i = ft_recursive_power(5, 3);
	printf("%d", i);
	return (0);
}
