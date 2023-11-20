/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:04:09 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/19 13:19:16 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int unsigned	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int	main(void)
{
	int	i;
	char	x1[] = "test123";
	char	x2[] = "test456";

	i = ft_strncmp(x1, x2, 1);
	printf("%d", i);
	return (0);
}