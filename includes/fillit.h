/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huweber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 16:22:48 by huweber           #+#    #+#             */
/*   Updated: 2016/12/25 16:20:21 by huweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>

# define BUFF_SIZE 700

void			print_err(int flag);
void			ft_init(char *file);

typedef struct		s_tmp
{
	int				i;
	int				len;
	int				line;
	int				count;
	int				square;
}					t_tmp;

typedef struct		s_parse
{
	int				count;
	char			**grid;
}					t_parse;

#endif
