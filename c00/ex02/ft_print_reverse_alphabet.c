/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 19:24:35 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/08 11:18:25 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	int	var;

	var = 'z';
	while (var >= 'a')
	{
		ft_putchar(var);
		var--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}