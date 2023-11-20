/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:07:41 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/15 17:55:59 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>
int	main(void)
{
	int a;
	int b;
	int *p1;
	int *p2;

	a = 3;
	b = 2;

	p1 = &a;
	p2 = &b;

	printf("a:  %d b: %d \n", a, b);
	ft_swap(p1, p2);
	printf("a:  %d b: %d \n", a, b);
	return (0);
}
