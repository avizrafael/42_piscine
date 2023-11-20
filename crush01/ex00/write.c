/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 17:08:41 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/18 20:19:29 by zkepes           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*void	section_1(int tab[6][6], int pos)
{
	tab[1][pos] = 1;
	tab[2][pos] = 2;
	tab[3][pos] = 3;
	tab[4][pos] = 4;
}

void	section_2(int tab[6][6], int pos)
{
	tab[pos][4] = 1;
	tab[pos][3] = 2;
	tab[pos][2] = 3;
	tab[pos][1] = 4;
}

void	section_3(int tab[6][6], int pos)
{
	tab[4][pos] = 1;
	tab[3][pos] = 2;
	tab[2][pos] = 3;
	tab[1][pos] = 4;
}

void	section_4(int tab[6][6], int pos)
{
	tab[pos][1] = 1;
	tab[pos][2] = 2;
	tab[pos][3] = 3;
	tab[pos][4] = 4;
}

void	write_1234(int tab[6][6], int sec, int pos)
{
	if (sec == 1)
		section_1(tab, pos);
	if (sec == 2)
		section_2(tab, pos);
	if (sec == 3)
		section_3(tab, pos);
	if (sec == 4)
		section_4(tab, pos);
}*/

void	write_last_4(int tab[6][6], int sec, int pos)
{
	if (sec == 1)
		tab[3][pos] = 4;
	if (sec == 2)
		tab[pos][2] = 4;
	if (sec == 3)
		tab[2][pos] = 4;
	if (sec == 4)
		tab[pos][3] = 4;
}

void	write_3_and_1(int tab[6][6], int sec, int pos)
{
	if (sec == 1)
	{
		tab[2][pos] = 3;
		tab[4][pos] = 1;
	}
	if (sec == 2)
	{
		tab[pos][3] = 3;
		tab[pos][1] = 1;
	}
	if (sec == 3)
	{
		tab[3][pos] = 3;
		tab[1][pos] = 1;
	}
	if (sec == 4)
	{
		tab[pos][2] = 3;
		tab[pos][4] = 1;
	}
}

void	write_2_in_2(int tab[6][6], int sec, int pos)
{
	if (sec == 1)
	{
		tab[2][pos] = 2;
		tab[1][pos] = 3;
	}
	if (sec == 2)
	{
		tab[pos][3] = 2;
		tab[pos][4] = 3;
	}
	if (sec == 3)
	{
		tab[3][pos] = 2;
		tab[4][pos] = 3;
	}
	if (sec == 4)
	{
		tab[pos][2] = 2;
		tab[pos][1] = 3;
	}
}

void	write_1_in_2(int tab[6][6], int sec, int pos)
{
	if (sec == 1)
		tab[2][pos] = 1;
	if (sec == 2)
		tab[pos][3] = 1;
	if (sec == 3)
		tab[3][pos] = 1;
	if (sec == 4)
		tab[pos][2] = 1;
}
