/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 18:06:16 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/08 11:03:27 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	var;

	var = 'a';
	while (var <= 'z')
	{
		ft_putchar(var);
		var++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return (0);
}