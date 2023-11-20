/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 14:10:34 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/26 16:24:03 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int nb)
{
	int	fb;

	if (nb < 0)
		return (-1);
	if (nb <= 1)
		return (nb);
	fb = ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2);
	return (fb);
}

#include <stdio.h>
int	main()
{
	int	fb;

	fb = ft_fibonacci(10);
	printf("%d", fb);
	return (0);
}
