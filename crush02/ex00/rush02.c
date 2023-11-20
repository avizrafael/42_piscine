/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raviz-es <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:34:27 by raviz-es          #+#    #+#             */
/*   Updated: 2023/06/25 12:26:11 by raviz-es         ###   ########.fr       */
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

int		ft_atoi(const char *str);
char	*ft_strdup(char *src);

char	*get_first(int o_file)
{
	int		i;
	char	c[1];
	char	*str;

	str = malloc(sizeof(char) * 128);
	i = 0;
	read(o_file, c, 1);
	
	while (c[0] >= '0' && c[0] <= '9')
	{
		str[i] = c[0];
		read(o_file, c, 1);
		i++;
	}
	return (str);
}

char	*get_second(int o_file, char *c)
{
	int		i;
	char	*str;

	str = malloc(sizeof(char) * 128);
	i = 0;
	while (c[0] != '\n')
	{
		str[i] = c[0];
		read(o_file, c, 1);
		i++;
	}
	return (str);
}

t_dict	*read_file(char *file)
{
	int		i;
	int		o_file;
	t_dict	*dict;
	char	c[1];
	char	*tmp;

	o_file = open(file, O_RDONLY);
	dict = malloc(sizeof(t_dict) * 33);
	i = 0;
	while (i < 32)
	{
		dict[i].n = ft_atoi(get_first(o_file));
		read(o_file, c, 1);
		while (c[0] == ' ')
			read(o_file, c, 1);
		if (c[0] == ':')
			read(o_file, c, 1);
		while (c[0] == ' ')
			read(o_file, c, 1);
		tmp = get_second(o_file, c);
		dict[i].s = ft_strdup(tmp);
		i++;
	}
	close(o_file);
	return (dict);
}
