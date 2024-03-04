#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmonteco </var/spool/mail/vmonteco>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 21:23:56 by vmonteco          #+#    #+#              #
#    Updated: 2024/03/04 23:46:06 by vmonteco         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME =				libtest.a

INCLUDES_DIR =		includes
SRC_DIR =			src

CC =				gcc
CFLAGS =			-Wall -Werror -Wextra -I $(INCLUDES_DIR)

SRC_FILES =			print_single_result.c \
					print_section_result.c \
					print_main_result.c \
					capture_fd.c \
					inject_to_fd.c
INCLUDES_FILES =	test.h

SRC =				$(addprefix $(SRC_DIR)/,$(SRC_FILES))
INCLUDES =			$(addprefix $(INCLUDES_DIR)/,$(INCLUDES_FILES))

OBJ =				$(subst .c,.o,$(SRC))

CLEAN_FILES =		$(OBJ)


all: $(NAME)

$(NAME): $(OBJ) $(INCLUDES)
	ar rc $@ $(OBJ)
	ranlib $@

clean:
	rm $(CLEAN_FILES)

fclean: clean
	rm $(NAME)

re: fclean all

.PHONY: all clean fclean re .PHONY
