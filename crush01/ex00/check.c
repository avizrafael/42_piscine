/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 16:37:01 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/18 18:30:11 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_index(int tab[6][6], int sec, int pos)
{
	if (sec == 1)
		return (tab[0][pos]);
	else if (sec == 2)
		return (tab[pos][5]);
	else if (sec == 3)
		return (tab[5][pos]);
	else if (sec == 4)
		return (tab[pos][0]);
	else
		return (0);
}

int	check_oposit(int tab[6][6], int sec, int pos)
{
	if (sec == 1)
		return (tab[5][pos]);
	else if (sec == 2)
		return (tab[pos][0]);
	else if (sec == 3)
		return (tab[0][pos]);
	else if (sec == 4)
		return (tab[pos][5]);
	else
		return (0);
}

int	check_1st_pos(int tab[6][6], int sec, int pos)
{
	if (sec == 1)
		return (tab[1][pos]);
	else if (sec == 2)
		return (tab[pos][4]);
	else if (sec == 3)
		return (tab[4][pos]);
	else if (sec == 4)
		return (tab[pos][1]);
	else
		return (0);
}

int	check_3th_pos(int tab[6][6], int sec, int pos)
{
	if (sec == 1)
		return (tab[3][pos]);
	else if (sec == 2)
		return (tab[pos][2]);
	else if (sec == 3)
		return (tab[2][pos]);
	else if (sec == 4)
		return (tab[pos][3]);
	else
		return (0);
}
