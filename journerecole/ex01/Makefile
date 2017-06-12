# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avella <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/06/12 14:52:03 by avella            #+#    #+#              #
#    Updated: 2017/06/12 14:52:05 by avella           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phoneBook

SRCC = main.cpp Contact.class.cpp

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
