/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:09:45 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/12 11:50:24 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	va;
	int	vb;

	va = *a;
	vb = *b;
	*a = va / vb;
	*b = va % vb;
}

#include <stdio.h>
int	main(void)
{
	int	a = 2;
	int	b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("Div: %d Mod: %d\n", a, b);
}