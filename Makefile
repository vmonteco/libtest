#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmonteco </var/spool/mail/vmonteco>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/04 21:23:56 by vmonteco          #+#    #+#              #
#    Updated: 2024/03/04 21:33:37 by vmonteco         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME =				libtest.a

INCLUDES_DIR =		includes
SRC_DIR =			src

SRC_FILES =			
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
