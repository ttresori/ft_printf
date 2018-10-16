#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttresori <rammsteinluffy@gmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/16 12:41:03 by ttresori          #+#    #+#              #
#    Updated: 2018/10/16 16:22:22 by ttresori         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME= ft_printf
SRCDIR= src
SRC= main.c ft_printf.c utils.c

OBJDIR= obj
OBJ= $(SRC:.c=.o)

LIBDIR= libft
LIB= ft

FLAGS= -Wall -Wextra -Werror

all: $(LIBDIR)/lib$(LIB).a $(OBJDIR) $(NAME)

$(LIBDIR)/lib$(LIB).a: #Compile des libs
	@tput setaf 90 ; echo [COMPILE-LIB]
	make -C $(LIBDIR)

$(OBJDIR): # Creation objdir
	@mkdir -p $(OBJDIR)

$(NAME): $(addprefix $(OBJDIR)/, $(OBJ))
	@$(CC) $(FLAGS) $(addprefix $(OBJDIR)/, $(OBJ)) -o $(NAME) -L $(LIBDIR) -l $(LIB)
	@tput setaf 91 ; echo [COMPILE-PROG]

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@$(CC) $(FLAGS) -c $< -o $@
	@tput setaf 25 ; echo $<

clean:
	@tput setaf 70 ; echo [CLEAN --] [$(OBJDIR)] [$(LIBDIR)]
	@rm -rf $(OBJDIR)

fclean: clean
	@tput setaf 70 ; echo [FCLEN --] [$(NAME)] [$(LIBDIR)]
	@rm -rf $(NAME)
	@make fclean -C $(LIBDIR)

tmpc:
	@tput setaf 90 ; echo [Delete tmp]
	@rm -rf *~
	@rm -rf src/*~

re: fclean all

.PHONY: re fclean clean all