/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 10:32:23 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/16 10:38:32 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

#include <stdio.h>
int	main(void)
{
	char	x[] = "teste";
	int	n;

	n = ft_strlen(x);
	printf("%s %d", x, n);
	return (0);
}
