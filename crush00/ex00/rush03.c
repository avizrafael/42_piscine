/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 09:18:15 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/11 18:57:11 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_line(int col, char first_char, char second_char, char third_char)
{
	int	x;

	ft_putchar(first_char);
	x = 2;
	while (x <= col)
	{
		if (col >= 2 && x < col)
		{
			ft_putchar(second_char);
		}
		else
		{	
			ft_putchar(third_char);
		}
		x++;
	}
}

void	rush(int col, int lin)
{
	int	y;

	y = 1;
	while (y <= lin)
	{
		if (y == 1)
		{
			write_line(col, 'A', 'B', 'C');
			ft_putchar('\n');
		}
		else if (y < lin)
		{
			write_line(col, 'B', ' ', 'B');
			ft_putchar('\n');
		}
		else
		{
			write_line(col, 'A', 'B', 'C');
			ft_putchar('\n');
		}
		y++;
	}
}
