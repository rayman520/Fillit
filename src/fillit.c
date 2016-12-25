/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huweber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 16:20:15 by huweber           #+#    #+#             */
/*   Updated: 2016/12/25 16:29:00 by huweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

void			ft_parse_tetri(char	*buff, t_tmp t)
{
	(void)buff;
	(void)t;
}

t_tmp			ft_var_init(char *buff)
{
	t_tmp		t;

	t.len = ft_strlen(buff);
	t.i = 0;
	t.count = 0;
	t.square = 0;
	t.line = -1;
	if (((t.len + 1) % 21) != 0)
		print_err(0);
	return (t);
}

void			ft_basic_verifs(char *buff)
{
	t_tmp		t;

	t = ft_var_init(buff);
	while (t.i < t.len)
	{
		if (buff[t.i] == '\n' && t.line == 4)
		{
			t.square++;
			t.i++;
		}
		if (buff[t.i] == '\n' && t.square == 4)
		{
			t.square = 0;
			t.count++;
			t.i++;
		}
		t.line = -1;
		while (++t.line < 4)
		{
			if (buff[t.i] != '#' && buff[t.i] != '.' && t.i < t.len)
				print_err(0);
			t.i++;
		}
	}
	ft_parse_tetri(buff, t);
}

void			ft_init(char *file)
{
	int			fd;
	char		*buff;

	if ((fd = open(file, O_RDONLY)) == -1)
		print_err(0);
	if (!(buff = (char *)malloc(BUFF_SIZE * sizeof(char))))
		print_err(0);
	if (read(fd, buff, BUFF_SIZE) == -1)
		print_err(0);
	ft_basic_verifs(buff);
}

int				main(int ac, char **av)
{
	if (ac != 2)
		print_err(1);
	ft_init(av[1]);
	return (0);
}
