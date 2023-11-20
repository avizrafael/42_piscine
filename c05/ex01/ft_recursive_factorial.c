/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 13:59:04 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/26 19:42:41 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	unsigned int	f;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	f = nb * ft_recursive_factorial(nb - 1);
	return (f);
}

#include <stdio.h>
int	main(void)
{
	int	f;

	f = ft_recursive_factorial(10);
	printf("%d \n", f);
	return (0);
}
