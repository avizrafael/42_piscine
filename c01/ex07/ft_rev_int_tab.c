/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <raviz-es@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:17:44 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/28 13:38:20 by raviz-es         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	size--;
	while (i <= size)
	{
		temp = tab[i];
		tab[i] = tab[size];
		tab[size] = temp;
		size--;
		i++;
	}
}

#include <stdio.h>
int	main(void)
{
	int	tab[] = {0, 1, 5, 3, 4, 2};
	int 	i;

   	for(i = 0; i < 6; i++)
		printf("%d ", tab[i]);
	ft_rev_int_tab(tab, 6);
	printf("\n");
	for(i = 0; i < 6; i++)
		printf("%d ", tab[i]);
	return (0);
}