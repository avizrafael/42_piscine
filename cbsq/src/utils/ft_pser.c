/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pser.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:55:19 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/28 11:55:21 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/bsq.h"

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

bool	ft_pser(char *str)
{
	(void)!write(2, str, ft_strlen(str));
	return (false);
}
