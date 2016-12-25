#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: huweber <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/03 16:26:44 by huweber           #+#    #+#              #
#    Updated: 2016/12/25 18:17:39 by huweber          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

SRCS = fillit.c err.c

OBJS = $(SRCS:.c=.o)

HDRS = -I./ -I./libft/

CCFLAGS = gcc -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	make -C libft/
	$(CCFLAGS) $(HDRS) -c $(SRCS)
	$(CCFLAGS) $(OBJS) -lft -L./libft/ -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re