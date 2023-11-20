/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:33:12 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/25 12:21:27 by raviz-es         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

typedef struct t_dict
{
	int		n;
	char	*s;
}	t_dict;

void	ft_putstr(char *str);
t_dict	*read_file(char *file);
int		ft_atoi(const char *str);

void	print_result(int n, t_dict *dict)
{
	int	i;

	(void) n;
	i = 0;
	while (dict[i].s)
	{
		ft_putstr(dict[i].s);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	t_dict	*dict;

	if (ac == 2)
	{
		if (ft_atoi(av[1]) < 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		dict = read_file("numbers.dict");
		print_result(ft_atoi(av[1]), dict);
	}
	else if (ac == 3)
	{
		if (ft_atoi(av[2]) < 0)
		{
			write(1, "Error\n", 6);
			return (0);
		}
		dict = read_file(av[1]);
		print_result(ft_atoi(av[2]), dict);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
