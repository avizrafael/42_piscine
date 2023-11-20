/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:02:34 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/15 10:08:33 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	if (size < 1)
		return (len);
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

int     main(void)
{
        char    x[] = "teste1teste2teste3";
        char    y[5];
	int	len;

        printf("%s \n", x);
        printf("%s \n", y);
        len = ft_strlcpy(y, x, 25);
        printf("%s %i \n", y, len);
}