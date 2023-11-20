/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:23:46 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/14 12:16:23 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	x[] = "teste1";
	char	y[] = "xxxxxxxxxx";

	printf("%s %zu \n", x, sizeof(x));
	printf("%s %zu \n", y, sizeof(y));
	printf("%s \n", y);
	ft_strncpy(y, x, 10);
	printf("%s %zu \n", x, sizeof(x));
	printf("%s %zu \n", y, sizeof(y));

}