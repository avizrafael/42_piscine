/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 11:39:31 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/18 20:44:16 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
void	if_head_4(int tab[6][6]);
void	if_head_3_op_2(int tab[6][6]);
void	if_head_2_op_1(int tab[6][6]);
void	if_head_2_op_2(int tab[6][6]);

void	start_array(int tab[6][6])
{
	int	row;
	int	col;

	row = 0;
	col = 0;
	while (row <= 5 && col <= 5)
	{
		tab[row][col] = 0;
		if (col < 5)
		{
			col++;
		}
		else
		{
			col = 0;
			row++;
		}
	}
}

void	get_numbers(char *str, int tab[6][6])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '4')
		{
			if (i < 8)
				tab[0][j + 1] = ft_atoi(str + i);
			else if (i >= 8 && i < 16)
				tab[5][j - 3] = ft_atoi(str + i);
			else if (i >= 16 && i < 24)
				tab[j - 7][0] = ft_atoi(str + i);
			else
				tab[j - 11][5] = ft_atoi(str + i);
			j++;
		}
		i++;
	}
}

int	solve(int tab[6][6])
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if_head_4(tab);
	if_head_3_op_2(tab);
	if_head_2_op_1(tab);
	if_head_2_op_2(tab);
	while (i < 5)
	{
		while (j < 5)
		{
			if (tab[i][j] == 0)
				return (0);
			j++;
		}
		i++;
		j = 1;
	}
	return (1);
}

void	display(int tab[6][6])
{
	int	row;
	int	col;

	row = 1;
	col = 1;
	while (row <= 4 && col <= 4)
	{
		ft_putnbr(tab[row][col]);
		if (col < 4)
		{
			ft_putchar(32);
			col++;
		}
		else
		{
			ft_putchar(10);
			col = 1;
			row++;
		}
	}
}

int	main(int ac, char **av)
{
	int	tab[6][6];

	start_array(tab);
	if (ac != 2 && ft_strlen(av[1]) != 31)
		ft_putstr("Error\n");
	else
	{
		get_numbers(av[1], tab);
		if (solve(tab))
			display(tab);
		else
			ft_putstr("Error\n");
	}
	return (0);
}
