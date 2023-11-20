/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   heads.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:37:01 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/18 20:04:11 by zkepes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	write_1234(int tab[6][6], int sec, int pos);
void	write_last_4(int tab[6][6], int sec, int pos);
void	write_3_and_1(int tab[6][6], int sec, int pos);
void	write_2_in_2(int tab[6][6], int sec, int pos);
void	write_1_in_2(int tab[6][6], int sec, int pos);
int		check_index(int tab[6][6], int sec, int pos);
int		check_oposit(int tab[6][6], int sec, int pos);
int		check_1st_pos(int tab[6][6], int sec, int pos);
int		check_3th_pos(int tab[6][6], int sec, int pos);

void	if_head_4(int tab[6][6])
{
	int	sec;
	int	pos;

	sec = 1;
	while (sec <= 4)
	{
		pos = 1;
		while (pos <= 4)
		{
			if (check_index(tab, sec, pos) == 4)
				write_1234(tab, sec, pos);
			pos++;
		}
		sec++;
	}
}

void	if_head_3_op_2(int tab[6][6])
{
	int	sec;
	int	pos;

	sec = 1;
	while (sec <= 4)
	{
		pos = 1;
		while (pos <= 4)
		{
			if (check_index(tab, sec, pos) == 3
				&& check_oposit(tab, sec, pos) == 2)
				write_last_4(tab, sec, pos);
			if (check_index(tab, sec, pos) == 3
				&& check_oposit(tab, sec, pos) == 2
				&& check_1st_pos(tab, sec, pos) == 2)
				write_3_and_1(tab, sec, pos);
			pos++;
		}
		sec++;
	}
}

void	if_head_2_op_1(int tab[6][6])
{
	int	sec;
	int	pos;

	sec = 1;
	while (sec <= 4)
	{
		pos = 1;
		while (pos <= 4)
		{
			if (check_index(tab, sec, pos) == 2
				&& check_oposit(tab, sec, pos) == 1
				&& check_3th_pos(tab, sec, pos) == 1)
				write_2_in_2(tab, sec, pos);
			pos++;
		}
		sec++;
	}
}

void	if_head_2_op_2(int tab[6][6])
{
	int	sec;
	int	pos;

	sec = 1;
	while (sec <= 4)
	{
		pos = 1;
		while (pos <= 4)
		{
			if (check_index(tab, sec, pos) == 2
				&& check_oposit(tab, sec, pos) == 2
				&& check_1st_pos(tab, sec, pos) == 2)
				write_1_in_2(tab, sec, pos);
			pos++;
		}
		sec++;
	}
}
