# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avella <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/12 14:51:32 by avella            #+#    #+#              #
#    Updated: 2017/06/12 14:51:45 by avella           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCC = megaphone.cpp

SRCO = $(SRCC:%.cpp=%.o)

FLAG = -Wall -Werror -Wextra

all: main

%.o: %.c
	@echo -n  $< :
	@clang++ -o $@ -c $< $(FLAG)
	@echo

main: $(SRCO)
	@clang++ -o $(NAME) $(FLAG) $(SRCO)

clean:
	@rm -f $(SRCO)

fclean: clean
	@rm -f $(SRCO) $(NAME)

re: fclean all
