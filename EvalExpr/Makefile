# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhally <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/09 15:08:49 by mhally            #+#    #+#              #
#    Updated: 2018/09/09 15:08:50 by mhally           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

all:
	@echo 'set -f; echo $$1 | bc' > $(NAME)
	@chmod 777 eval_expr

clean:
	@chmod 777 Makefile

fclean: clean
	@rm -f eval_expr

re: fclean all

@echo > $(NAME) => puts 'set -f; echo $$1 | bc' in eval_expr
$$1 takes the first argument (2x $$ because in the Makefile 1x $ is set for extra normal variables)
set -f => gets rid of some extra characters
