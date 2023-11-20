/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:08:34 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/12 10:08:17 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <stdio.h>
int	main(void)
{
	int	a = 2;
	int	b = 2;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("Div: %d Mod: %d\n", div, mod);
}