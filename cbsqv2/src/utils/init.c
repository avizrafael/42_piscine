/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:55:53 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/28 11:55:56 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/bsq.h"

void	init_data(t_data *data)
{
	data->nbr_lines = 0;
	data->len_lines = 0;
	data->bsq_x = 0;
	data->bsq_y = 0;
	data->map = NULL;
}

unsigned short	**init_matrix(t_data *d)
{
	unsigned short	**matrix;
	unsigned int	i;

	matrix = malloc(sizeof(unsigned short *) * d->nbr_lines);
	if (!matrix)
	{
		ft_pser("Error: Malloc failed\n");
		return (NULL);
	}
	i = 0;
	while (i < d->nbr_lines)
	{
		matrix[i] = malloc(sizeof(unsigned short) * d->len_lines);
		if (!matrix[i])
			return (free_matrix_i(matrix, i));
		i++;
	}
	return (matrix);
}
