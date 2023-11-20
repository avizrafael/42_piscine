/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:59:04 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/27 14:23:00 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	unsigned int	f;
	int	x;

	f = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		f = f * nb;
		nb--;
	}
	return (f);
}

#include <stdio.h>
int	main(void)
{
	int	f;

	f = ft_iterative_factorial(7);
	printf("%d \n", f);
	return (0);
}
