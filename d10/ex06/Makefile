# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhally <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/03 12:45:42 by mhally            #+#    #+#              #
#    Updated: 2018/09/03 12:45:45 by mhally           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS ?= -Wall -Wextra -Werror
TARGET ?= do-op

SRCDIR := srcs
INCDIR := includes
SRC := main.c \
	setup.c \
	atoi.c \
	putnbr.c \
	operators.c
OBJ := $(addprefix $(SRCDIR)/,$(SRC:.c=.o))
CFLAGS += -MMD -MP -I$(INCDIR)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

-include $(OBJ:.o=.d)

clean:
	$(RM) $(OBJ) $(OBJ:.o=.d)

fclean: clean
	$(RM) $(TARGET)

re: fclean all

.PHONY: all clean
