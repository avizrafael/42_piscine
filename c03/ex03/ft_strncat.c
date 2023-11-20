/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:07:09 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/20 14:46:10 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int unsigned	i;
	int unsigned	j;

	j = 0;
	i = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && i < nb)
	{
		dest[j] = src[i];
		j++;
		i++;
	}
	dest[j] = '\0';
	return (dest);
}

#include <stdio.h>
int	main(void)
{
	char	x1[] = "teste1";
	char	x2[12] = "teste2";
	
	printf("%s\n%s\n", x1, x2);
	ft_strncat(x2, x1, 6);
	printf("%s", x2);
	return(0);
}
