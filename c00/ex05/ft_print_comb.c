/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:04:12 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/19 16:48:33 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while ( b <= '8')
		{
			while (c <= '9')
			{
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				if (a == '7' && b == '8' && c == '9')
					write(1, "\n",2);
				else
					write(1, ", ", 1);

				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}