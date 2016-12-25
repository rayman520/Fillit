/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpierre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/23 14:14:17 by cpierre           #+#    #+#             */
/*   Updated: 2016/12/23 15:15:47 by cpierre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int	main(int argc, char **argv)
{
	if (argc != 2)
		write(1, ERR_USAGE, ft_strlen(ERR_USAGE));
	else
		write(1, argv[1], ft_strlen(argv[1]));
	return (0);
}
