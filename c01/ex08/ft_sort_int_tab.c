/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <raviz-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:17:44 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/28 13:40:05 by raviz-es         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size--;
	while (i < size)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = -1;
		}
		i++;
	}
}

#include <stdio.h>
int	main(void)
{
	int	tab[] = {4, 1, 0, 5, 3, -2, 7, 8, 9, 6};
	int 	i;

   	for(i = 0; i < 10; i++)
		printf("%d ", tab[i]);
	ft_sort_int_tab(tab, 10);
	printf("\n");
	for(i = 0; i < 10; i++)
		printf("%d ", tab[i]);
	return (0);
}
