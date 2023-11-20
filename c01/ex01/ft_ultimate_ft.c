/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:06:42 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/12 09:57:50 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

#include <stdio.h>
int	main(void)
{
	int	x = 1;
	int *x1;
	int **x2;
	int ***x3;
	int ****x4;
	int *****x5;
	int ******x6;
	int *******x7;
	int ********x8;
	int *********x9;

	x1 = &x;
	x2 = &x1;
	x3 = &x2;
	x4 = &x3;
	x5 = &x4;
	x6 = &x5;
	x7 = &x6;
	x8 = &x7;
	x9 = &x8;
	ft_ultimate_ft(x9);
	printf("%d\n", x);
	return (0);
}