/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:07:09 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/19 11:55:47 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_dest;
	unsigned int	size_src;
	unsigned int	i;
	unsigned int	l;

	size_dest = ft_strlen(dest);
	size_src = ft_strlen(src);
	i = 0;
	l = 0;
	if (size > size_dest)
		l = size_src + size_dest;
	else
		l = size_src + size;
	while (src[i] != '\0' && (size_dest + 1) < size)
	{
		dest[size_dest] = src[i];
		size_dest++;
		i++;
	}
	dest[size_dest] = '\0';
	return (l);
}

#include <stdio.h>
int	main(void)
{
	char	x1[] = "teste1";
	char	x2[20] = "teste2";
	unsigned int	l;	

	printf("%s\n%s\n", x1, x2);
	l = ft_strlcat(x2, x1, 20);
	printf("%s %d", x2, l);
	return(0);
}