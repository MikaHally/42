# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhally <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/03 11:05:00 by mhally            #+#    #+#              #
#    Updated: 2018/09/03 11:05:01 by mhally           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS ?= -Wall -Wextra -Werror
TARGET ?= libft.a

SRCDIR := srcs
INCDIR := includes
SRC := ft_putchar.c \
	ft_putstr.c \
	ft_strcmp.c \
	ft_strlen.c \
	ft_swap.c
OBJ := $(addprefix $(SRCDIR)/,$(SRC:.c=.o))
CFLAGS += -MMD -MP -I$(INCDIR)

all: $(TARGET)

$(TARGET): $(OBJ)
	ar rc $@ $^
	ranlib $@

-include $(OBJ:.o=.d)

clean:
	$(RM) $(OBJ) $(OBJ:.o=.d)

fclean: clean
	$(RM) $(TARGET)

re: fclean all

.PHONY: all clean fclean re
