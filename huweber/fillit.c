/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huweber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 16:20:15 by huweber           #+#    #+#             */
/*   Updated: 2016/12/25 18:36:05 by huweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

void			list_init(char *file, t_tetri *t)
{
	int			fd;
	t_list		*last;
	t_list		**pivot;
	t_list		*head;
	char		*tmp;

	last = NULL;
	pivot = &last;
	if ((fd = open(file, O_RDONLY)) == -1)
		print_err(0);
	if (!(tmp = (char *)malloc(BUFF_SIZE * sizeof(char))))
		print_err(0);
	while (read(fd, tmp, 21) >= 20)
		ft_lstadd(&last, ft_lstnew(tmp, 20));
	head = *pivot;
	t->size = ft_lstsize(head);
	free(tmp);
}

int				main(int ac, char **av)
{
	t_tetri		t;

	if (ac != 2)
		print_err(1);
	list_init(av[1], &t);
	return (0);
}
