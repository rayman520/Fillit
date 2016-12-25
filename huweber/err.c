/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huweber <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/25 16:24:37 by huweber           #+#    #+#             */
/*   Updated: 2016/12/25 16:24:38 by huweber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

void			print_err(int flag)
{
	if (flag == 0)
		ft_putstr("error\n");
	else if (flag == 1)
		ft_putstr_fd("Usage: ./fillit source_file\n", 2);
	exit(0);
}
